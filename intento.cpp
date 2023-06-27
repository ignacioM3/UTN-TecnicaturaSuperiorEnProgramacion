void burbujeoMejorado (int arr[], int cant){
    int i = 0, j, aux;
    bool ordeando = false;

    while(i < cant && !ordeando){
        ordeando= true;

        for(j= 0; j < cant-i-1; j++){
            if(arr[j] > arr[j+1]){
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
                ordeando = false;
            }
        }
        i++
    }
}