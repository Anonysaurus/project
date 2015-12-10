//Вот функция, которую написал жук:
	for i = 1 to 50
        // get the new location
		fbflakeX#   = GetSpriteX    ( g_nflake [ i ].iSpritx ) 
		fbflakeY#   = GetSpriteY    ( g_nflake [ i ].iSpritx ) + g_nflake [ i ].fSpeedn#

        //  wavy movement!
		g_nflake [ i ].fValueBn# = g_nflake [ i ].fValueBn# + g_nflake [ i ].fValueAn#
		fbflakeX# = fbflakeX# + cos ( g_nflake [ i ].fValueBn# * 180 / 3.14 )/2

		if  fbflakeY#  > 105 
			fbflakeX# = Random ( -100, 100 )
			fbflakeY# = -110 + Random ( 0, 100 )
			fbflakeX#   = ScreenToWorldX ( fbflakeX# )
			fbflakeY#   = ScreenToWorldY ( fbflakeY# )
			speed# = Random ( 5, 10 )
			g_nflake [ i ].fSpeedn# = speed# / 10.0
			speed# = Random ( 0.1, 2 )
			g_nflake [ i ].fValueAn# = speed# / 100.0
			g_nflake [ i ].fValueBn# = 0.0
		endif
