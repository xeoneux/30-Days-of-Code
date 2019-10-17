    // first array equivalent to rows 
    let a = new Array(3);
    
    // inner array equivalent to columns
    for(i=0; i<a.length; i++) {
      a[i] = new Array(2);
    }
    
    // now assign values
    a[0][0] = "1"; 
    a[0][1] = "2"; 

    a[1][0] = "1";  
    a[1][1] = "2"; 

    a[2][0] = "1";
    a[2][1] = "2";
    
    /* console.log appends new line at end. So concatenate before     printing */
    
    let out="";
    for(let i=0; i<a.length; i++) {
      for(let j=0; j<a[i].length; j++) {
        out = out + a[i][j];
      }
    }
    console.log(out);
