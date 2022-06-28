        var p = 0
        for(var i = 1; i <= n; i++) {
            for(var q = i+1; q <= n; q++) {
                var s = i&q
                if(s < k) {
                    if(s > p) p = s
                }
            }
        }
        return p
