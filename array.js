// Make the array with 20 elements.
var table = new Array(20);

// Confirm array's length.
console.log("The array have "+table.length+" elements.");

//Insert random integer numbers between 0 and 100
for (i=0; i<table.length;i++){
    table[i]=Math.floor(Math.random() * (100 - 0 + 1) + 0);
};

console.log("The array contains:"+table);
//Sort the table in alphabetical order
function compareNumbers(a,b){
    return a-b
};
table.sort(compareNumbers);

//Show contain of sorted array.
console.log("The array after sort operation:"+table);

