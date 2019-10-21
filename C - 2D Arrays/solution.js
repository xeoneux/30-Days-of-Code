<script> 
  
// Create one dimensional array 
var gfg = new Array(3); 
  
// Loop to create 2D array using 1D array 
document.write("Creating 2D array <br>"); 
for (var i = 0; i < gfg.length; i++) { 
    gfg[i] = []; 
} 
var h = 0; 
var s = "GeeksforGeeks"; 
  
// Loop to initilize 2D array elements. 
for (var i = 0; i < 3; i++) { 
    for (var j = 0; j < 3; j++) { 
  
        gfg[i][j] = s[h++]; 
    } 
} 
  
// Loop to display the elements of 2D array. 
for (var i = 0; i < 3; i++) { 
    for (var j = 0; j < 3; j++) 
  
    { 
        document.write(gfg[i][j] + " "); 
    } 
    document.write("<br>"); 
} 
  
</script>                     
