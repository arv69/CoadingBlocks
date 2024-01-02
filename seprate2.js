let str = "javascript";
let freqMap = {};

for (let i = 0; i < str.length; i++) {
    const character = str[i];

    if (freqMap[character]) {
        freqMap[character] += 1;
    } else {
        freqMap[character] = 1;
    }
}

console.log(freqMap);
