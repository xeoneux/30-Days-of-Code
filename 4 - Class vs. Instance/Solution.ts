class Person {
  age: number;
  constructor(initialAge: number) {
    if (initialAge > 0) {
      this.age = initialAge;
    } else {
      console.log("Age is not valid, setting age to 0.");
      this.age = 0;
    }
  }
  public amIOld() {
    // Write code determining if this person's age is old and print the correct statement:
    if (this.age < 13) console.log("You are young.");
    else if (this.age < 18) console.log("You are a teenager.");
    else console.log("You are old.");
  }

  public yearPasses() {
    // Increment the age of the person in here
    this.age++;
  }
}

class Solution {
  public static Main() {
    let T: number = 25;
    for (let i = 0; i < T; i++) {
      let age = 20;
      let p = new Person(age);
      p.amIOld();
      for (let j = 0; j < 3; j++) {
        p.yearPasses();
      }
      p.amIOld();
    }
  }
}

Solution.Main();
