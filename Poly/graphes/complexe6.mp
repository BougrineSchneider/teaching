input metauml;
beginfig(1);
	Class.A("Complexe")
		("-reel : double", "-imag : double")
		("+module() : double", 
		 "+getReel() : double",
		 "+getImag() : double",
		 "+setReel(double reel) : void",
		 "+setImag(double imag) : void",
		 "+getArgument() : double");
	Note.nPrivate("Membre prive");
	Note.nPublic("Membre public");
	
	leftToRight.top(20)(nPrivate, A);
	topToBottom.right(20)(nPrivate, nPublic);
	
	drawObject(A);
	drawObject(nPrivate);
	drawObject(nPublic);

	clink(dashedLink)(A.attributeStack.pict[0], nPrivate);
	clink(dashedLink)(A.methodStack.pict[0], nPublic);
endfig;
end

