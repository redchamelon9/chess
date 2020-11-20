#pragma once
class piece
{

	int		PlayerID;
	int		Position;
	bool	IsEliminated;
	int		MoveTo;
	ofImage	pieceImageList[6];
	piece*	alivePieceList;
	piece*	eliminatedPieceList;
	char	type;


	piece	getPiece(){}
	char	getType() {}
	void	move() {}
	void	eliminate() {}
	void	revive() {}
	void	isChecked() {}
	void	isCheckmate() {}


};

