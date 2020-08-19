CraggyCoast_MapScripts::
	.byte 0

CraggyCoast_EventScript_Lemmy::
	trainerbattle_single TRAINER_LEMMY, CraggyCoast_Text_LemmyIntro, CraggyCoast_Text_LemmyDefeated
	msgbox CraggyCoast_Text_LemmyPostBattle, MSGBOX_AUTOCLOSE
	end

CraggyCoast_EventScript_Terrence::
	trainerbattle_single TRAINER_TERRENCE, CraggyCoast_Text_TerrenceIntro, CraggyCoast_Text_TerrenceDefeated
	msgbox CraggyCoast_Text_TerrencePostBattle, MSGBOX_AUTOCLOSE
	end

CraggyCoast_EventScript_Masahiro::
	trainerbattle_single TRAINER_MASAHIRO, CraggyCoast_Text_MasahiroIntro, CraggyCoast_Text_MasahiroDefeated
	msgbox CraggyCoast_Text_MasahiroPostBattle, MSGBOX_AUTOCLOSE
	end

CraggyCoast_EventScript_Mia::
	trainerbattle_double TRAINER_MIA_AND_JAKE, CraggyCoast_Text_MiaIntro, CraggyCoast_Text_MiaDefeated, CraggyCoast_Text_MiaNotEnoughPokemon
	msgbox CraggyCoast_Text_MiaPostBattle, MSGBOX_AUTOCLOSE
	end

CraggyCoast_EventScript_Jake::
	trainerbattle_double TRAINER_MIA_AND_JAKE, CraggyCoast_Text_JakeIntro, CraggyCoast_Text_JakeDefeated, CraggyCoast_Text_JakeNotEnoughPokemon
	msgbox CraggyCoast_Text_JakePostBattle, MSGBOX_AUTOCLOSE
	end

CraggyCoast_EventScript_Betty::
	trainerbattle_single TRAINER_BETTY, CraggyCoast_Text_BettyIntro, CraggyCoast_Text_BettyDefeated
	msgbox CraggyCoast_Text_BettyPostBattle, MSGBOX_AUTOCLOSE
	end

CraggyCoast_EventScript_Grant::
	trainerbattle_single TRAINER_GRANT, CraggyCoast_Text_GrantIntro, CraggyCoast_Text_GrantDefeated
	msgbox CraggyCoast_Text_GrantPostBattle, MSGBOX_AUTOCLOSE
	end

CraggyCoast_EventScript_Ryuji::
	trainerbattle_single TRAINER_RYUJI, CraggyCoast_Text_RyujiIntro, CraggyCoast_Text_RyujiDefeated
	msgbox CraggyCoast_Text_RyujiPostBattle, MSGBOX_AUTOCLOSE
	end

CraggyCoast_EventScript_Charles::
	trainerbattle_single TRAINER_CHARLES, CraggyCoast_Text_CharlesIntro, CraggyCoast_Text_CharlesDefeated
	msgbox CraggyCoast_Text_CharlesPostBattle, MSGBOX_AUTOCLOSE
	end