function swap(arr, i, j){
    let temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp; // Error: This line is incorrect. It should be arr[j] = temp;
}

function sp(arr){
    let i=0;
    let j=arr.length -1;

    while(i<=j){
        if(arr[i]==1){
            swap(arr,i,j);
            j--;
        }
        else {
            i++;
        }
    }
    return arr;
}

let arr = [1,1,1,0,0,0,1,1,1,0,0];

console.log(sp(arr));
