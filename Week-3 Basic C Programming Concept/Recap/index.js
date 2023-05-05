function insert(pos, value){
    let arr = [10, 20, 30, 40, 50];
    for(let i = 0;i<arr.length ; i++){
        arr[pos] = value;
    }
    console.log(arr)
}
insert(2,100)