Documentation Author: Niko Procopi

Custom Vertex Buffers without OBJs

We are going to make models that have Position and Color,
no lighting, on textures, no OBJs.

We add new classes: PipeColor and VertexColor
We add an instance of PipeColor to Demo, we add
	a new descriptor layout to Demo: desc_layout_color
We add a new constructor to Mesh for our new type of Mesh
We add new shadrs: color.vert and color.frag

We make a mesh and an entity with this new system in Scene
Remember, you need to Draw and Update the entity, or else it
will not appear on the screen