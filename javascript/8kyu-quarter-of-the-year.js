// Name: Quarter of the year
// Link: https://www.codewars.com/kata/5ce9c1000bab0b001134f5af

// Solution 1 using If statement:
const quarterOf = (month) => {
    if (month === 1 || month === 2 || month === 3) {
        return 1;
    } else if (month === 4 || month === 5 || month === 6) {
        return 2;
    } else if (month === 7 || month === 8 || month === 9) {
        return 3;
    } else {
        return 4;
    }
};

console.log(quarterOf(3))

// Solution 2 using the switch statement. 
const quarterOf2 = (month) => {
    switch(month) {
        case 1:
        case 2:
        case 3:
            return 1;
            break;
        case 4:
        case 5:
        case 6:
            return 2;
            break;
        case 7:
        case 8:
        case 9:
            return 3;
            break;
        case 10:
        case 11:
        case 12:
            return 4;
            break;
    }
};


console.log(quarterOf2(4))
