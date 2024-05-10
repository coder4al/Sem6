	GLOBAL __main
	EXPORT __main
	AREA main, CODE, READONLY

__main
	LDR R0, = 0x11111111
	LDR R1, = 0x22222222
	ADD R2, R0, R1	;replace ADD with SUB for (-) and MUL for (x)
	
stop
	B stop
	end