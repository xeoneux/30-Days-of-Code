class Difference{
    constructor(a){
        this.a = a;
    }
    computeDifference() {
        return Math.max(this.a) - Math.min(this.a);
    }
}

const p1 = new Difference([1, 2, 5]);
maximumDifference = p1.computeDifference();
console.log(maximumDifference);