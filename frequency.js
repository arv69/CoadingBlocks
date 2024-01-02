let str = "javascript";
let freqMap ={};
for(const character of str){
    if(freqMap[character]){
        freqMap[character]+=1;
    }
    else{
        freqMap[character]=1;
    }
}
console.log(freqMap);
