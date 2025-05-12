void display(int [],int );
void swap(int &,int &);
void bubbleSort(int a[],int N);
void insertionSort(int a[],int N);
void selectionSort(int a[],int N);
void countingSort(int a[],int N);


void display(int a[],int N,int move,string method){
        int i;
       for(i=0;i<N;i++)
           cout<<a[i]<<" ";
       cout<<endl;
       cout<< "Amount of moves : " << move << endl;
}

void swap(int &x,int &y){
        int temp=y;
        y=x;
        x=temp;
}

void bubbleSort(int *A,int N, int &move){
        int i,j,current;
        for(i=0;i<N-1;i++){
                for(j=0;j<N-i-1;j++){
                        if(A[j] > A[j+1]){
                                swap(A[j],A[j+1]);
                                move++;
                        }
                }
        }
}

void insertionSort(int *A,int N,int &move){
    int i,j,key;
    for(i=1;i<N;i++){
        key = A[i];
        j=i-1;

        while(j>=0 && A[j] > key){
            A[j+1] = A[j];
            j -= 1;
            move++;
        }
        A[j+1]=key;
    }
}

void selectionSort(int *A,int N,int &move){
    int i,j,min;
    for(i=0;i<N-1;i++){
        min = i;
        for(j=i+1;j<N;j++){
            if(A[j] < A[min]){
                min = j;
            }
        }

        if(min!=i){
            swap(A[min],A[i]);
            move++;
        }

    }
    
}

void countingSort(int arr[], int N, int &move) {
    //Find the maximum
    int maxElement = *max_element(arr, arr + N);
    //Find the minimum
    int minElement = *min_element(arr, arr + N); 

     //Determine the range of elements
    int range = maxElement - minElement + 1;

    vector<int> count(range), output(N);

    for(int i=0;i<N;++i) {
        count[arr[i]-minElement]++;
    }

    for(int i=1;i<count.size();++i) {
        count[i]+=count[i-1];
        move++;
    }

    for(int i=N-1;i>=0;--i) {
        output[count[arr[i] - minElement] - 1] = arr[i];
        count[arr[i] - minElement]--;
        move++;
    }

    for(int i=0;i<N;++i) {
        arr[i] = output[i];
        move++;
    }
}
