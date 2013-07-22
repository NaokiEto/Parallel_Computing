/* DO NOT EDIT.
 * Generated by ../bin/vtkEncodeString
 * 
 * Define the vtkProjectedAAHexahedraMapper_FS string.
 *
 * Generated from file: /home/lakers/Downloads/VTK/VolumeRendering/vtkProjectedAAHexahedraMapper_FS.glsl
 */
#include "vtkProjectedAAHexahedraMapper_FS.h"
const char *vtkProjectedAAHexahedraMapper_FS =
"/*=========================================================================\n"
"\n"
"  Program:   Visualization Toolkit\n"
"  Module:    vtkGPUVolumeRayCastMapper_HeaderFS.glsl\n"
"\n"
"  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen\n"
"  All rights reserved.\n"
"  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.\n"
"\n"
"     This software is distributed WITHOUT ANY WARRANTY; without even\n"
"     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR\n"
"     PURPOSE.  See the above copyright notice for more information.\n"
"\n"
"=========================================================================*/\n"
"\n"
"// High quality volume renderer for axis-aligned hexahedra\n"
"// Implementation by Stephane Marchesin (stephane.marchesin@gmail.com)\n"
"// CEA/DIF - Commissariat a l'Energie Atomique, Centre DAM Ile-De-France\n"
"// BP12, F-91297 Arpajon, France.\n"
"//\n"
"// This file implements the paper\n"
"// \"High-Quality, Semi-Analytical Volume Rendering for AMR Data\",\n"
"// Stephane Marchesin and Guillaume Colin de Verdiere, IEEE Vis 2009.\n"
"\n"
"// inputs of FS\n"
"// texcoord0.xyz : position in the brick space [0,1]^3\n"
"// texcoord0.w   : cell size\n"
"// texcoord1.xyz : position in object space\n"
"// texcoord2.xyzw: node data 0,1,2,3\n"
"// texcoord3.xyzw: node data 4,5,6,7\n"
"\n"
"uniform sampler3D preintegration_table;\n"
"uniform vec3 observer;\n"
"uniform float length_max;\n"
"\n"
"vec4 sample(float sample0, float sample1, float length)\n"
"{\n"
"  float corrected_length = length * gl_TexCoord[0].w / length_max ;\n"
"  return texture3D(preintegration_table,\n"
"                   vec3(sample0,sample1,corrected_length));\n"
"}\n"
"\n"
"void main()\n"
"{\n"
"  vec3 pos = gl_TexCoord[0].xyz;\n"
"  vec3 progression;\n"
"  vec3 dist1,dist2,dist;\n"
"  vec3 l=vec3(1.0,0.0,0.0);\n"
"  float length;\n"
"  float cell_length = gl_TexCoord[0].w;\n"
"\n"
"  progression.xyz = gl_TexCoord[1].xyz - observer.xyz;\n"
"  progression = normalize(progression);\n"
"\n"
"  dist1.xyz = abs((1.0-pos.xyz)/progression.xyz);\n"
"  dist2.xyz = abs((pos.xyz)/progression.xyz);\n"
"  if (progression.x>0.0)\n"
"    dist.x=dist1.x;\n"
"  else\n"
"    dist.x=dist2.x;\n"
"  if (progression.y>0.0)\n"
"    dist.y=dist1.y;\n"
"  else\n"
"    dist.y=dist2.y;\n"
"  if (progression.z>0.0)\n"
"    dist.z=dist1.z;\n"
"  else\n"
"    dist.z=dist2.z;\n"
"\n"
"  length = min(dist.x,min(dist.y,dist.z));\n"
"  vec3 p1 = pos, p2 = pos + vec3(length) * progression;\n"
"\n"
"  float s0 = gl_TexCoord[2].x;\n"
"  float s1 = gl_TexCoord[2].y;\n"
"  float s2 = gl_TexCoord[2].z;\n"
"  float s3 = gl_TexCoord[2].w;\n"
"\n"
"  float s4 = gl_TexCoord[3].x;\n"
"  float s5 = gl_TexCoord[3].y;\n"
"  float s6 = gl_TexCoord[3].z;\n"
"  float s7 = gl_TexCoord[3].w;\n"
"  float   x0 = p1.x,\n"
"    x1 = p2.x - p1.x,\n"
"    y0 = p1.y,\n"
"    y1 = p2.y - p1.y,\n"
"    z0 = p1.z,\n"
"    z1 = p2.z - p1.z;\n"
"  float a = (s3 - s0 + s1 + s4 + s6 - s2 - s5 - s7) *x1*y1*z1;\n"
"  float b = (-x0*y1*z1 - x1*y0*z1 - x1*y1*z0 + x1*z1)*s7\n"
"    + (x0*y1*z1 + x1*y0*z1 + x1*y1*z0)*s6\n"
"    + (y1*z1 - x0*y1*z1 - x1*y0*z1 - x1*y1*z0)*s5\n"
"    + (-x1*z1 + x1*y1*z0 - y1*z1 + x0*y1*z1 + x1*y0*z1)*s4\n"
"    + (-x1*z1 + x1*y0*z1 + x1*y1*z0 - x1*y1 + x0*y1*z1)*s3\n"
"    + (-x1*y0*z1 - x0*y1*z1 + x1*y1 - x1*y1*z0)*s2\n"
"    + (x1*y1 + y1*z1 - x1*y1*z0 + x1*z1 - x0*y1*z1 - x1*y0*z1)*s0\n"
"    + (x1*y1*z0 - y1*z1 - x1*y1 + x0*y1*z1 + x1*y0*z1)*s1;\n"
"  float c = (-x0*y0*z1 + x0*z1 + x1*z0 - x1*y0*z0 - x0*y1*z0)*s7\n"
"    + (x1*y0*z0 + x0*y1*z0 + x0*y0*z1)*s6\n"
"    + (y0*z1 - x0*y1*z0 - x1*y0*z0 + y1*z0 - x0*y0*z1)*s5\n"
"    + (x0*y0*z1 + z1 - y0*z1 - y1*z0 - x0*z1 - x1*z0 + x0*y1*z0 + x1*y0*z0)*s4\n"
"    + (x1*y0*z0 + x0*y0*z1 + x0*y1*z0 - x1*z0 - x1*y0 - x0*z1 - x0*y1 + x1)*s3\n"
"    + (x0*y1 + x1*y0 - x0*y0*z1 - x0*y1*z0 - x1*y0*z0)*s2\n"
"    + (-x1*y0 + x0*y1*z0 - y0*z1 - x0*y1 + x0*y0*z1 + y1 + x1*y0*z0 - y1*z0)*s1\n"
"    + (-x0*y1*z0 - z1 + x1*y0 - x0*y0*z1 - x1*y0*z0 - y1 + y0*z1 + x1*z0\n"
"       + y1*z0 + x0*y1 - x1 + x0*z1)*s0;\n"
"  float d = (x0*z0 - x0*y0*z0)*s7 + (y0*z0 - x0*y0*z0)*s5\n"
"    + (-x0*z0 - y0*z0 + x0*y0*z0 + z0)*s4 + (-x0*z0 + x0 + x0*y0*z0 - x0*y0)*s3\n"
"    + (x0*y0 - x0*y0*z0)*s2 + (-y0*z0 - x0*y0 + y0 + x0*y0*z0)*s1\n"
"    + (-y0 - z0 - x0*y0*z0 + x0*z0 + y0*z0 - x0 + x0*y0 + 1.0)*s0\n"
"    + s6*x0*y0*z0;\n"
"  float r[4];\n"
"  r[0] = 0.0;\n"
"  r[1] = 0.0;\n"
"  r[2] = 0.0;\n"
"  r[3] = 0.0;\n"
"  int numsteps = 0;\n"
"\n"
"  // at this point P(t) = a.t^3 + b.t^2 + c.t + d\n"
"\n"
"  if ( (abs(a)<=0.00001) && (abs(b)<=0.00001) )\n"
"    {\n"
"    // P(t) is linear\n"
"    numsteps = 0;\n"
"    }\n"
"  else if (abs(a)<=0.00001)\n"
"    {\n"
"    // P(t) is quadratic\n"
"    r[0] = -c/(2.0*b);\n"
"\n"
"    if ((r[0] <= 0.0) || (r[0] >= 1.0))\n"
"      {\n"
"      numsteps = 0;\n"
"      }\n"
"    else\n"
"      {\n"
"      numsteps = 1;\n"
"      }\n"
"    }\n"
"  else\n"
"    {\n"
"    // P(t) is cubic\n"
"    // small optimization here : we divide delta by 4,\n"
"    // and simplify r[0]/r[1] by 2\n"
"    float delta = b*b - 3.0*a*c;\n"
"    if (delta < 0.0)\n"
"      {\n"
"      numsteps = 0;\n"
"      } else {\n"
"    numsteps = 2;\n"
"    r[0] = (-b  - sqrt(delta))/(3.0*a);\n"
"    r[1] = (-b  + sqrt(delta))/(3.0*a);\n"
"\n"
"    if ((r[1] <= 0.0) || (r[1] >= 1.0))\n"
"      {\n"
"      numsteps--;\n"
"      }\n"
"\n"
"    if ((r[0] <= 0.0) || (r[0] >= 1.0))\n"
"      {\n"
"      numsteps--;\n"
"      r[0] = r[1];\n"
"      }\n"
"    }\n"
"    }\n"
"\n"
"#if 0\n"
"  // handle light extrema as well\n"
"  if (abs(e)>0.00001)\n"
"    {\n"
"    // Q(t) is quadratic\n"
"    if ((-f/(2.0*e) > 0.0) && (-f/(2.0*e) < 1.0))\n"
"      {\n"
"      r[numsteps] = -f/(2.0*e);\n"
"      numsteps++;\n"
"      }\n"
"    }\n"
"#endif\n"
"  vec4 result, val0, val1, val2, val3;\n"
"  float sample0,sample1,sample2,sample3,sample4;\n"
"  if (numsteps==0)\n"
"    {\n"
"    // single preintegration over [0,1]\n"
"\n"
"    // evaluate the scalar value at the 2 points :\n"
"    // sample0 at t = 0.0;\n"
"    // sample1 at t = 1.0;\n"
"    sample0 = d;\n"
"    sample1 = d + c + b + a;\n"
"\n"
"    // preintegrate over [0,1.0] -> [sample0,sample1]\n"
"    val0 = sample(sample0,sample1,length);\n"
"\n"
"    // blend values\n"
"    result.rgba = val0.rgba;\n"
"    }\n"
"  else if (numsteps==1)\n"
"    {\n"
"    // double preintegration over [0,r[0]] and [r[0],1.0]\n"
"\n"
"    // evaluate the scalar value at the 3 points :\n"
"    // sample0 at t = 0.0;\n"
"    // sample1 at t = r[0];\n"
"    // sample2 at t = 1.0;\n"
"    sample0 = d;\n"
"    sample1 = d + r[0]* (c + r[0]* (b + r[0]*a));\n"
"    sample2 = d + c + b + a;\n"
"\n"
"    // preintegrate over [0,r[0]] -> [sample0,sample1]\n"
"    val0 = sample(sample0,sample1,r[0]*length);\n"
"    // preintegrate over [r[0],1] -> [sample1,sample2]\n"
"    val1 = sample(sample1,sample2,(1.0 - r[0])*length);\n"
"\n"
"    // blend values\n"
"    result.rgba = val0.rgba + vec4(1.0 - val0.a) * val1.rgba;\n"
"    }\n"
"  else if (numsteps==2)\n"
"    {\n"
"    // numsteps==2\n"
"    // triple preintegration over [0,r[0]], [r[0],r[1]] and [r[1],1.0]\n"
"\n"
"    if (r[1]<r[0])\n"
"      {\n"
"      float tmp = r[0];\n"
"      r[0] = r[1];\n"
"      r[1] = tmp;\n"
"      }\n"
"\n"
"    // evaluate the scalar value at the 4 points :\n"
"    // sample0 at t = 0.0;\n"
"    // sample1 at t = r[0];\n"
"    // sample2 at t = r[1];\n"
"    // sample3 at t = 1.0;\n"
"    sample0 = d;\n"
"    sample1 = d + r[0]* (c + r[0]* (b + r[0]*a));\n"
"    sample2 = d + r[1]* (c + r[1]* (b + r[1]*a));\n"
"    sample3 = d + c + b + a;\n"
"\n"
"    // preintegrate over [0,r[0]] -> [sample0,sample1]\n"
"    val0 = sample(sample0,sample1,r[0]*length);\n"
"    // preintegrate over [r[0],r[1]] -> [sample1,sample2]\n"
"    val1 = sample(sample1,sample2,(r[1] - r[0])*length);\n"
"    // preintegrate over [r[1],1] -> [sample2,sample3]\n"
"    val2 = sample(sample2,sample3,(1.0 - r[1])*length);\n"
"\n"
"    // blend values\n"
"    result.rgba = val0.rgba + vec4(1.0 - val0.a) *\n"
"      (val1.rgba + vec4(1.0 - val1.a) * val2.rgba);\n"
"    }\n"
"  else\n"
"    {\n"
"    // numsteps==3\n"
"    // triple preintegration over [0,r[0]], [r[0],r[1]], [r[1],r[2]]\n"
"    // and [r[2],1.0]\n"
"\n"
"    if (r[0]>r[1])\n"
"      {\n"
"      float tmp = r[0];\n"
"      r[0] = r[1];\n"
"      r[1] = tmp;\n"
"      }\n"
"    if (r[1]>r[2])\n"
"      {\n"
"      float tmp = r[2];\n"
"      r[2] = r[1];\n"
"      r[1] = tmp;\n"
"      }\n"
"    if (r[0]>r[1])\n"
"      {\n"
"      float tmp = r[0];\n"
"      r[0] = r[1];\n"
"      r[1] = tmp;\n"
"      }\n"
"\n"
"    // evaluate the scalar value at the 4 points :\n"
"    // sample0 at t = 0.0;\n"
"    // sample1 at t = r[0];\n"
"    // sample2 at t = r[1];\n"
"    // sample3 at t = 1.0;\n"
"    sample0 = d;\n"
"    sample1 = d + r[0]* (c + r[0]* (b + r[0]*a));\n"
"    sample2 = d + r[1]* (c + r[1]* (b + r[1]*a));\n"
"    sample3 = d + r[2]* (c + r[2]* (b + r[2]*a));\n"
"    sample4 = d + c + b + a;\n"
"\n"
"    // preintegrate over [0,r[0]] -> [sample0,sample1]\n"
"    val0 = sample(sample0,sample1,r[0]*length);\n"
"    // preintegrate over [r[0],r[1]] -> [sample1,sample2]\n"
"    val1 = sample(sample1,sample2,(r[1] - r[0])*length);\n"
"    // preintegrate over [r[1],r[2]] -> [sample2,sample3]\n"
"    val2 = sample(sample2,sample3,(r[2] - r[1])*length);\n"
"    // preintegrate over [r[2],1] -> [sample3,sample4]\n"
"    val3 = sample(sample3,sample4,(1.0 - r[2])*length);\n"
"\n"
"    // blend values\n"
"    result.rgba = val0.rgba + vec4(1.0 - val0.a) *\n"
"      (val1.rgba + vec4(1.0 - val1.a) *\n"
"       (val2.rgba + vec4(1.0 - val2.a) * val3.rgba));\n"
"    }\n"
"  gl_FragColor.rgba = result.rgba;\n"
"}\n"
"\n";

