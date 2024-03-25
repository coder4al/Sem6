const textInput = document.getElementById("textInput");
const charCount = document.getElementById("charCount");
const maxLength = parseInt(prompt("Enter the limit : "));

textInput.addEventListener("input", function () {
  const inputLength = textInput.value.length;

  if (inputLength > maxLength) {
    textInput.value = textInput.value.slice(0, maxLength);
    --inputLength;
  }
  charCount.textContent = `Characters entered: ${inputLength}`;
});
