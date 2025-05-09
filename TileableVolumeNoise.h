
#ifndef D_TILEABLE3DNOISE
#define D_TILEABLE3DNOISE

/// @return Tileable Worley noise value in [0, 1].
/// @param p 3d coordinate in [0, 1], being the range of the repeatable pattern.
/// @param cellCount the number of cell for the repetitive pattern.
float TileableWorleyNoise3D(float px, float py, float pz, float cellCount);

/// @return Tileable Perlin noise value in [0, 1].
/// @param p 3d coordinate in [0, 1], being the range of the repeatable pattern.
float TileablePerlinNoise3D(float px, float py, float pz, float frequency, int octaveCount);


#endif // D_TILEABLE3DNOISE

