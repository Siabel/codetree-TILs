const fs = require("fs");
const N = Number(fs.readFileSync(0).toString().trim());

let cnt = 0;

for(let i = 0; i <= N; i++){
    if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0){
        cnt += 1;
    }
}

console.log(cnt)