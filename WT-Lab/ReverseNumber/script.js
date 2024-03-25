function reverseNumber(number) {
  if (!number || isNaN(number)) {
    alert("Invalid input. Please enter a valid number.");
    location.reload();
  } else {
    alert(`Reverse of ${number} is ${parseInt(
      number.toString().split("").reverse().join(""))}`);
  }
}

const number = parseInt(prompt("Enter a number : "));

reverseNumber(number);
