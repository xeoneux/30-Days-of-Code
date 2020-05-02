function processData(input) {
    //Enter your code here
    input = input.split('\n')

    for(let i=1;i<input.length;i++){
        var splitWord = input[i].split('');

        var even = '';
        var odd = '';

        for(x=0;x<splitWord.length;x++){
            if(x%2==0){
                even = even + splitWord[x];
            }else{
                odd = odd +splitWord[x];
            }
        }
        console.log(even + ' '+ odd);
    }
}