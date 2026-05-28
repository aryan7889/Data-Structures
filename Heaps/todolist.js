document.addEventListener('DOMContentLoaded',()=>{
    const todoInput = document.getElementById("todo-input");
    const addTaskButton = document.getElementById("add-task-btn");
    const todolist = document.getElementById("todo-list");
    const taskCounterSpan = document.getElementById("task-counter");
    const clearCompletedBtn = document.getElementById("clear-completed-btn");
    const filterbuttons = document.querySelectorAll(".filter-btn");

    let tasks = JSON.parse(localStorage.getItem("tasks")) || [];

    let currentfilter = "all"

    function escapeHtml(str){
        return str.replace(/[&<>]/g, function(m){
            if(m==='&')return '&amp';
            if(m==='<')return '&lt';
            if(m==='>')return '&gt';
            return m;
        });
    }

    function saveTasks(){
        localStorage.setItem('tasks',JSON.stringify(tasks));
    }

    function updateCounter(){
        const total = tasks.length;
        const completedCount = tasks.filter(t => t.completed).length;
        taskCounterSpan.textContent = `${total} task${total !== 1?'s':''}.${completedCount} done`;
    }

    function renderSingleTask(task){
        const li = document.createElement('li');
        li.setAttribute('data-id',task.id);
        if(task.completed){
            li.classList.add("completed");
        }
        li.innerHTML=`
        <span>${escapeHtml(task.text)}</span>
        <button>delete</button>
        `;

        li.addEventListener('click',(e)=>{
            if(e.target.tagName==="button")return;
            task.completed = !task.completed;
            li.classList.toggle("completed");
            saveTasks();
            updateCounter();
            if(currentfilter!=="all"){
                renderalltask();
            }
        });
        li.querySelector('button').addEventListener('click',(e)=>{
            e.stopPropagation();
            tasks = tasks.filter(t=>t.id!==task.id);
            li.remove();
            saveTasks();
            updateCounter();
            renderalltask();
        })
        return li;
    }

    function renderalltask(){
        todolist.innerHTML = "";
        let filtertasks = tasks;
        if(currentfilter==="pending"){
            filtertasks = tasks.filter(task => !task.completed);
        }else if(currentfilter === "completed"){
            filtertasks = task.filter(task => task.completed);
        }

        if(filtertasks.length === 0){
            const emptyMsg = document.createElement('li');
            emptyMsg.style.cssText = "justify-content: center; background: #f1f5f9; cursor: default;";
            let message = "";
            if(currentfilter ==="all"){
                message = "✨ No tasks yet. Add one!";
            }else if(currentfilter==="pending"){
                message = "🎉 All tasks completed!";
            }else{
                message = "✔️ No completed tasks";
            }
            emptyMsg.innerHTML = `
            <span>${message}</span>
            `
        }else{
            filtertasks.forEach(task => {
                const li = renderSingleTask(task);
                todolist.appendChild(li);
            });
        }
        updateCounter();
        updateFilterButtonActive();
    }

    function addtask(){
        const TaskText = todoInput.value.trim();
        if(TaskText === ""){
            alert("please write something!");
            return;
        }
        const newtask = {
            id: Date.now(),
            text = TaskText,
            completed = false
        }
        tasks.push(newtask);
        saveTasks();
        todoInput.value ="";

        if(currentfilter === "completed"){
            currentfilter = "all";
        }
        renderalltask();
        todoInput.focus();
    }

    function clearCompleted() {
        tasks = tasks.filter(task => !task.completed);
        saveTasks();
        renderalltask();
    }

    function setFilter(filter) {
        currentfilter = filter;
        renderalltask();
    }

    function updateFilterButtonActive() {
        filterBtns.forEach(btn => {
            const filterValue = btn.getAttribute("data-filter");
            if (filterValue === currentfilter) {
                btn.classList.add("active");
            } else {
                btn.classList.remove("active");
            }
        });
    }

    addTaskButton.addEventListener('click', addtask);
    todoInput.addEventListener('keypress', (e) => {
        if (e.key === 'Enter') addtask();
    });
    clearCompleted.addEventListener('click', clearCompleted);
    filterbuttons.forEach(btn => {
        btn.addEventListener('click', () => {
            const filter = btn.getAttribute("data-filter");
            setFilter(filter);
        });
    });

    renderalltask();
})