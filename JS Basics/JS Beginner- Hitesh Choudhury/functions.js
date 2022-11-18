function SayHello(name){
    console.log("Hello There Auro");
    console.log("Hello There ",name);
}

// SayHello(45);
// SayHello("Hello");
function Nameste() {
    return "Hello in India"
}
var greetings=Nameste();
console.log(Nameste());

// Input: getUserRole(name,roll)
function getUserRole(name,role) {
    switch (role) {
        case "admin":
            return  `${name} is admin with all access`;
            break;
    
            case "subadmin":
                return  `${name} is sub-admin with access to create and Delete`;
                break;

                case "user":
                    return `${name} is a user to consume content`;
                break; 

        default:
            break;
    }
}

console.log(getUserRole("hitesh","admin"));