<<<<<<< SEARCH
			//base version which doesn't apply any noise textures.
			HRESULT hr = W3DShaderManager::LoadAndCreateD3DShader("shaders\\terrain.pso", &Declaration[0], 0, false, &m_dwBasePixelShader);
			if (FAILED(hr))
			{
				DEBUG_LOG(("W3DShaderManager: terrain.pso not found, using 2-stage fallback"));
				pixelShadersAvailable = FALSE;
			}

			//version which blends 1 noise texture.
			if (pixelShadersAvailable)
			{
				hr = W3DShaderManager::LoadAndCreateD3DShader("shaders\\terrainnoise.pso", &Declaration[0], 0, false, &m_dwBaseNoise1PixelShader);
				if (FAILED(hr))
				{
					DEBUG_LOG(("W3DShaderManager: terrainnoise.pso not found, using 2-stage fallback"));
					pixelShadersAvailable = FALSE;
				}
			}

			//version which blends 2 noise textures.
			if (pixelShadersAvailable)
			{
				hr = W3DShaderManager::LoadAndCreateD3DShader("shaders\\terrainnoise2.pso", &Declaration[0], 0, false, &m_dwBaseNoise2PixelShader);
				if (FAILED(hr))
				{
					DEBUG_LOG(("W3DShaderManager: terrainnoise2.pso not found, using 2-stage fallback"));
					pixelShadersAvailable = FALSE;
				}
			}

			// Only set pixel shader mode if ALL shaders loaded successfully
			if (pixelShadersAvailable)
			{
				W3DShaders[W3DShaderManager::ST_TERRAIN_BASE]=&terrainShaderPixelShader;
				W3DShaders[W3DShaderManager::ST_TERRAIN_BASE_NOISE1]=&terrainShaderPixelShader;
				W3DShaders[W3DShaderManager::ST_TERRAIN_BASE_NOISE2]=&terrainShaderPixelShader;
				W3DShaders[W3DShaderManager::ST_TERRAIN_BASE_NOISE12]=&terrainShaderPixelShader;
				W3DShadersPassCount[W3DShaderManager::ST_TERRAIN_BASE]=1;
				W3DShadersPassCount[W3DShaderManager::ST_TERRAIN_BASE_NOISE1]=1;
				W3DShadersPassCount[W3DShaderManager::ST_TERRAIN_BASE_NOISE2]=1;
				W3DShadersPassCount[W3DShaderManager::ST_TERRAIN_BASE_NOISE12]=1;
				DEBUG_LOG(("W3DShaderManager: Using pixel shader path for terrain"));
			}
			else
			{
				DEBUG_LOG(("W3DShaderManager: Falling back to 2-stage shader for terrain (pixel shaders unavailable)"));
			}
			// GeneralsX @bugfix BenderAI 13/02/2026 - Always return TRUE if 2-stage shader initialized
			return TRUE;
=======
			//base version which doesn't apply any noise textures.
			HRESULT hr = W3DShaderManager::LoadAndCreateD3DShader("shaders\\terrain.pso", &Declaration[0], 0, false, &m_dwBasePixelShader);
			if (FAILED(hr))
			{
				DEBUG_LOG(("W3DShaderManager: terrain.pso not found, using 2-stage fallback"));
				pixelShadersAvailable = FALSE;
			}

			//version which blends 1 noise texture.
			if (pixelShadersAvailable)
			{
				hr = W3DShaderManager::LoadAndCreateD3DShader("shaders\\terrainnoise.pso", &Declaration[0], 0, false, &m_dwBaseNoise1PixelShader);
				if (FAILED(hr))
				{
					DEBUG_LOG(("W3DShaderManager: terrainnoise.pso not found, using 2-stage fallback"));
					pixelShadersAvailable = FALSE;
				}
			}

			//version which blends 2 noise textures.
			if (pixelShadersAvailable)
			{
				hr = W3DShaderManager::LoadAndCreateD3DShader("shaders\\terrainnoise2.pso", &Declaration[0], 0, false, &m_dwBaseNoise2PixelShader);
				if (FAILED(hr))
				{
					DEBUG_LOG(("W3DShaderManager: terrainnoise2.pso not found, using 2-stage fallback"));
					pixelShadersAvailable = FALSE;
				}
			}

			// Only set pixel shader mode if ALL shaders loaded successfully
			if (pixelShadersAvailable)
			{
				W3DShaders[W3DShaderManager::ST_TERRAIN_BASE]=&terrainShaderPixelShader;
				W3DShaders[W3DShaderManager::ST_TERRAIN_BASE_NOISE1]=&terrainShaderPixelShader;
				W3DShaders[W3DShaderManager::ST_TERRAIN_BASE_NOISE2]=&terrainShaderPixelShader;
				W3DShaders[W3DShaderManager::ST_TERRAIN_BASE_NOISE12]=&terrainShaderPixelShader;
				W3DShadersPassCount[W3DShaderManager::ST_TERRAIN_BASE]=1;
				W3DShadersPassCount[W3DShaderManager::ST_TERRAIN_BASE_NOISE1]=1;
				W3DShadersPassCount[W3DShaderManager::ST_TERRAIN_BASE_NOISE2]=1;
				W3DShadersPassCount[W3DShaderManager::ST_TERRAIN_BASE_NOISE12]=1;
				DEBUG_LOG(("W3DShaderManager: Using pixel shader path for terrain"));
			}
			else
			{
				DEBUG_LOG(("W3DShaderManager: Falling back to 2-stage shader for terrain (pixel shaders unavailable)"));
			}
			// GeneralsX @bugfix BenderAI 13/02/2026 - Always return TRUE if 2-stage shader initialized
			return TRUE;
>>>>>>> REPLACE
