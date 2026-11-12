let datebox = document.getElementById("dob")
let rvlbtn = document.getElementById("button")
rvlbtn.addEventListener("click",function(){
  let part=datebox.value.split("-")
  alert(part[0]+part[1]+part[2])
})
  
