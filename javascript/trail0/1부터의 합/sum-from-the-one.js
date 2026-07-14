const fs = require("fs");
const N = Number(fs.readFileSync(0).toString().trim());

let add = 0;

for(let i = 0; i <= 100; i++){
    add += i;
    if(add >= N){
        console.log(i);
        break;
    }
}