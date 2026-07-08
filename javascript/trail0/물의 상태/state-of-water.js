const fs = require("fs");
let n = fs.readFileSync(0).toString().trim().split(" ");

if(n < 0){
    console.log("ice");
} else if (n >= 100) {
    console.log("vapor");
} else {
    console.log("water");
}