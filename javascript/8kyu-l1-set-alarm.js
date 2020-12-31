// Name: L1: Set Alarm
// Link: https://www.codewars.com/kata/568dcc3c7f12767a62000038/solutions/javascript


// Solution 1:

function setAlarm(employed, vacation){
    // If logic condition is met, return true. 
    if (employed === true && vacation === false) {
        return true;
    // Otherwise, return false. 
    } else {
        return false;
    }
}


// Solution 2:

function setAlarm2(employed, vacation){
    // Return true if logical condition is met. Otherwise, return false. 
    return(employed === true && vacation === false)
}

// Using Quokka to run the code inside of VS Code for solution 1.
console.log(setAlarm(true, true), "Should be false.");
console.log(setAlarm(false, true), "Should be false.");
console.log(setAlarm(true, false), "Should be true.");

console.log(setAlarm(true, true))


// Using Quokka to run the code inside of VS Code for solution 2. 
console.log(setAlarm2(true, true), "Should be false.");
console.log(setAlarm2(false, true), "Should be false.");
console.log(setAlarm2(true, false), "Should be true.");

console.log(setAlarm2(false, false))
