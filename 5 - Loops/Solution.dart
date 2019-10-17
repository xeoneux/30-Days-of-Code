
void main() { 
   for(var temp, i = 0, j = 1; j<30; temp = i, i = j, j = i + temp) { 
      print('${j}'); 
   } 
   
   
    var num = 5; 
   var factorial = 1; 
   
   for( var i = num ; i >= 1; i-- ) { 
      factorial *= i ; 
   } 
   print(factorial); 
} 
