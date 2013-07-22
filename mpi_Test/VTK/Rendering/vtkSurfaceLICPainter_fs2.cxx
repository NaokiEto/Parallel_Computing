/* DO NOT EDIT.
 * Generated by ../bin/vtkEncodeString
 * 
 * Define the vtkSurfaceLICPainter_fs2 string.
 *
 * Generated from file: /home/lakers/Downloads/VTK/Rendering/vtkSurfaceLICPainter_fs2.glsl
 */
#include "vtkSurfaceLICPainter_fs2.h"
const char *vtkSurfaceLICPainter_fs2 =
"//=========================================================================\n"
"//\n"
"//  Program:   Visualization Toolkit\n"
"//  Module:    vtkSurfaceLICPainter_fs2.glsl\n"
"//\n"
"//  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen\n"
"//  All rights reserved.\n"
"//  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.\n"
"//\n"
"//     This software is distributed WITHOUT ANY WARRANTY; without even\n"
"//     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR\n"
"//     PURPOSE.  See the above copyright notice for more information.\n"
"//\n"
"//=========================================================================\n"
"\n"
"// Filename: vtkSurfaceLICPainter_fs2.glsl\n"
"// Filename is useful when using gldb-gui\n"
"\n"
"#version 110\n"
"\n"
"uniform sampler2D texLIC;\n"
"uniform sampler2D texGeometry;\n"
"uniform sampler2D texDepth;\n"
"uniform float     uLICIntensity;\n"
"\n"
"vec3    texMasker = vec3( -1.0, -1.0, -1.0 ); // for zero-vector fragments\n"
"\n"
"void main()\n"
"{      \n"
"  float fragDepth = texture2D( texDepth,    gl_TexCoord[1].st ).b;\n"
"  \n"
"  if ( fragDepth == 0.0 )\n"
"    {\n"
"    discard;\n"
"    }\n"
"    \n"
"  vec3  licTexVal = texture2D( texLIC,      gl_TexCoord[0].st ).rgb;\n"
"  vec4  geomColor = texture2D( texGeometry, gl_TexCoord[1].st );\n"
"  \n"
"  // In pass #1 LIC (providing a low-quality image during user interaction)\n"
"  // or pass #2 LIC (providing an improved image when no user interaction),\n"
"  // both in vtkLineIntegralConvolution2D_fs1, any fragment where the surface\n"
"  // vector is zero is assigned with a masking texture value vec3( -1.0, -1.0,\n"
"  // -1.0 ). Such fragments need to be made totally transparent to show the\n"
"  // underlying geoemtry surface.\n"
"  bvec3 isMaskVal = equal( licTexVal, texMasker );\n"
"  int   rejectLIC = int(  all( isMaskVal )  );\n"
"  \n"
"  vec4  tempColor = vec4(   (  licTexVal     *         uLICIntensity + \n"
"                               geomColor.xyz * ( 1.0 - uLICIntensity )\n"
"                            ), geomColor.a\n"
"                        );\n"
"  tempColor = float( 1 - rejectLIC ) * tempColor + \n"
"              float(     rejectLIC ) * geomColor;\n"
"              \n"
"  gl_FragColor = tempColor;  \n"
"  gl_FragDepth = fragDepth;\n"
"}\n"
"\n";

