function gotoHomePage(){
	// If they want to go to the homepage

	router.goto("home");
}

setTimeout(gotoHomePage, 3000);

// setTimeout(function(){
// 	router.goto("home");
// }, 5000);

module.exports = {
	gotoHomePage: gotoHomePage
};

