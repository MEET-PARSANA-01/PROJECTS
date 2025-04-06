const todoList = document.getElementById("todoList"); //OF TEXT
const newTodoInput = document.getElementById("newTodo"); //OF LIST ITEM

// const addTodo = function(){}; ANOTHER WAY TO WRITE FUNCTION
function addTodo() {
  const todoText = newTodoInput.value;
  if (todoText == "") {
    return;
  }

  const li = document.createElement("li");
  li.textContent = todoText;

  const checkbox = document.createElement("input");
  checkbox.type = "checkbox";

  checkbox.addEventListener("change", () => {
    if (checkbox.checked) {
      li.classList.add("Completed");
    } else {
      li.classList.remove("Completed");
    }
  });

  li.prepend(checkbox);
  todoList.appendChild(li);

  newTodoInput.value = "";


  
}
