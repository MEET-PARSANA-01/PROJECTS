let todoList = [
  // MADE THIS LIST OBJECT'S ARRAY TO STORE DATE ALSO IN THIS    2
  // { item: "BUY G-WAGON", dueDate: "2025-09-21" },
  // { item: "DRIVE BMW M5 COMP.", dueDate: "2025-10-21" },
]; //TO STORE THE LIST OF TODO'S    1
displayItems(); //CALL WHEN PAGE LOADS

function addTodo() {
  let inputElement = document.querySelector("#todo_input"); //THIS WILL GET ELEMENT      1
  let dateElement = document.querySelector("#todo-date"); //TO GET THE DESIRED ELEMENT    2
  let todoItem = inputElement.value; //TO STORE THE VALUE OF LIST IN todoItem    1
  let todoDate = dateElement.value; //TO STORE THE VALUE OF DATE IN todoDate    2
  todoList.push({ item: todoItem, dueDate: todoDate }); //TO MAKE THE LIST OF THE TODO'S BY PUSHING IN THE ARRAY    1
  //TO PUSH THE ITEM AND DUEDATE IN THE TO DO LIST    2
  inputElement.value = ""; //TO EMPTY(BLANK) THE VALUE TEXT BOX AT THE END     1
  dateElement.value = ""; //TO EMPTY(BLANK) THE VALUE  DATE BOX AT THE END     2
  displayItems(); //CALL WHEN NEW ITEM IS ADDED
}

function displayItems() {
  let containerElement = document.querySelector(".todo-container"); //TO GET THE ELEMENT

  let newHtml = ""; //THIS HOLDS WHOLE HTML

  for (let i = 0; i < todoList.length; i++) {
    // let Item = todoList[i].item; //TO TAKE OUT THE LIST ITEM          2
    // let dueDate = todoList[i].dueDate; //TO TAKE OUT THE DUEDATE      2
    let {item , dueDate} = todoList[i];  //DE-STRUCTURING OF THE ABOVE TWO STATEMENTS
    //SPAN IS USED BCOZ IT IS A INLINE ELEMENT , IT ALLOWS DELETE BUTTON TO STAY AT THE NEXT TO ITEMS.
    //WHOLE HTML ON CLICK ,↙↙↙↙
    newHtml += `
      <span>${item}</span>
      <span>${dueDate}</span>
      <button  class="btn-delete"  onclick="todoList.splice(${i},1);displayItems()">DELETE</button>
    `;
  }
  //SPLICE IS USED TO DELETE THE ITEMS ON CLICK
  //displayItems function IS CALLED TO RE-PRINT THE LISTS AFTER DELETION
  containerElement.innerHTML = newHtml; //THIS CHANGES WHOLE HTML OF THE CONTAINER ELEMENT AT THE END
}
