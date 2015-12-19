//Вот функция, которую написал жук:

    for i = 1 to 50
		g_nflake [ i ].iSpritx = 0
		g_nflake [ i ].fSpeedn#  = 0.0
		g_nflake [ i ].fValueAn# = 0.0
		g_nflake [ i ].fValueBn# = 0.0
	next i
//END of Function

//NEW FUNCTION:

	for i = 1 to 50
        // get the new location
		flakeX#   = GetSpriteX    ( g_nflake [ i ].iSpritx ) 
		flakeY#   = GetSpriteY    ( g_nflake [ i ].iSpritx ) + g_nflake [ i ].fSpeedn#

        //  wavy movement!
		g_nflake [ i ].fValueBn# = g_nflake [ i ].fValueBn# + g_nflake [ i ].fValueAn#
		flakeX# = flakeX# + cos ( g_nflake [ i ].fValueBn# * 180 / 3.14 )/2

		if  flakeY#  > 105 
			flakeX# = Random ( -100, 100 )
			flakeY# = -110 + Random ( 0, 100 )
			flakeX#   = ScreenToWorldX ( flakeX# )
			flakeY#   = ScreenToWorldY ( flakeY# )
			speed# = Random ( 5, 10 )
			g_nflake [ i ].fSpeedn# = speed# / 10.0
			speed# = Random ( 0.1, 2 )
			g_nflake [ i ].fValueAn# = speed# / 100.0
			g_nflake [ i ].fValueBn# = 0.0
		endif
		SetSpritePosition    ( g_nflake [ i ].iSpritx, flakeX#, flakeY# )
	next i
