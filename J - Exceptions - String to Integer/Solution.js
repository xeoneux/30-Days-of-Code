function main() {
    const S = readLine();
    
    try {
        isNaN(Number(S)) ? error : console.log(S)
    }
    catch (err) {
        console.log('Bad String')
    }
}