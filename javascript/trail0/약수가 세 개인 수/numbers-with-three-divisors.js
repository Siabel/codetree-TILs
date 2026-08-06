const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split(" ");
let s = Number(input[0]);
let e = Number(input[1]);

let res = 0;

for(let i = s; i < e + 1; i++){
    let cnt = 0;

    for(let j = 1; j < i + 1; j++){
        if(i % j == 0)
            cnt++;
        if(cnt > 3)
            break;
    }
    
    if(cnt == 3)
        res++;
}

console.log(res);