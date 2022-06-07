const readline=require("readline").createInterface({
	input: process.stdin,
	output: process.stdout
});
readline.question("",(ans)=> {console.log(ans);readline.close();});

