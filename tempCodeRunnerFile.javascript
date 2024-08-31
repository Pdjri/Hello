function addition(a,b){
  return a+b;
}

function arithmeticOperations(a,b,operation){
  return operation(a,b)
}

console.log(arithmeticOperations(2,3,addition));