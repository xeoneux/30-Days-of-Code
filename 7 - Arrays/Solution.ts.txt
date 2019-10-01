export class RegisterFormComponent 
{
     genders = new Array<GenderType>();   // Use any array supports different kind objects

     loadGenders()
     {
        this.genders.push({name: "Male",isoCode: 1});
        this.genders.push({name: "FeMale",isoCode: 2});
     }
}

type GenderType = { name: string, isoCode: number };    // Specified format