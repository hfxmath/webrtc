/*
 *  Copyright (c) 2012 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

// GMM tables for active segments. Generated by MakeGmmTables.m.

#ifndef WEBRTC_MODULES_AUDIO_PROCESSING_VAD_VOICE_GMM_TABLES_H_
#define WEBRTC_MODULES_AUDIO_PROCESSING_VAD_VOICE_GMM_TABLES_H_

static const int kVoiceGmmNumMixtures = 12;
static const int kVoiceGmmDim = 3;

static const double
kVoiceGmmCovarInverse[kVoiceGmmNumMixtures][kVoiceGmmDim][kVoiceGmmDim] =
{
    {   {1.83673825579513e+00, -8.09791637570095e-04, 4.60106414365986e-03},
        { -8.09791637570095e-04, 8.89351738394608e-04, -9.80188953277734e-04},
        {4.60106414365986e-03, -9.80188953277734e-04, 1.38706060206582e-03}
    },
    {   {6.76228912850703e+01, -1.98893120119660e-02, -3.53548357253551e-03},
        { -1.98893120119660e-02, 3.96216858500530e-05, -4.08492938394097e-05},
        { -3.53548357253551e-03, -4.08492938394097e-05, 9.31864352856416e-04}
    },
    {   {9.98612435944558e+00, -5.27880954316893e-03, -6.30342541619017e-03},
        { -5.27880954316893e-03, 4.54359480225226e-05, 6.30804591626044e-05},
        { -6.30342541619017e-03, 6.30804591626044e-05, 5.36466441382942e-04}
    },
    {   {3.39917474216349e+01, -1.56213579433191e-03, -4.01459014990225e-02},
        { -1.56213579433191e-03, 6.40415424897724e-05, 6.20076342427833e-05},
        { -4.01459014990225e-02, 6.20076342427833e-05, 3.51199070103063e-03}
    },
    {   {1.34545062271428e+01, -7.94513610147144e-03, -5.34401019341728e-02},
        { -7.94513610147144e-03, 1.16511820098649e-04, 4.66063702069293e-05},
        { -5.34401019341728e-02, 4.66063702069293e-05, 2.72354323774163e-03}
    },
    {   {1.08557844314806e+02, -1.54885805673668e-02, -1.88029692674851e-02},
        { -1.54885805673668e-02, 1.16404042786406e-04, 6.45579292702802e-06},
        { -1.88029692674851e-02, 6.45579292702802e-06, 4.32330478391416e-04}
    },
    {   {8.22940066541450e+01, -1.15903110231303e-02, -4.92166764865343e-02},
        { -1.15903110231303e-02, 7.42510742165261e-05, 3.73007314191290e-06},
        { -4.92166764865343e-02, 3.73007314191290e-06, 3.64005221593244e-03}
    },
    {   {2.31133605685660e+00, -7.83261568950254e-04, 7.45744012346313e-04},
        { -7.83261568950254e-04, 1.29460648214142e-05, -2.22774455093730e-06},
        {7.45744012346313e-04, -2.22774455093730e-06, 1.05117294093010e-04}
    },
    {   {3.78767849189611e+02, 1.57759761011568e-03, -2.08551217988774e-02},
        {1.57759761011568e-03, 4.76066236886865e-05, -2.33977412299324e-05},
        { -2.08551217988774e-02, -2.33977412299324e-05, 5.24261005371196e-04}
    },
    {   {6.98580096506135e-01, -5.13850255217378e-04, -4.01124551717056e-04},
        { -5.13850255217378e-04, 1.40501021984840e-06, -2.09496928716569e-06},
        { -4.01124551717056e-04, -2.09496928716569e-06, 2.82879357740037e-04}
    },
    {   {2.62770945162399e+00, -2.31825753241430e-03, -5.30447217466318e-03},
        { -2.31825753241430e-03, 4.59108572227649e-05, 7.67631886355405e-05},
        { -5.30447217466318e-03, 7.67631886355405e-05, 2.28521601674098e-03}
    },
    {   {1.89940391362152e+02, -4.23280856852379e-03, -2.70608873541399e-02},
        { -4.23280856852379e-03, 6.77547582742563e-05, 2.69154203800467e-05},
        { -2.70608873541399e-02, 2.69154203800467e-05, 3.88574543373470e-03}
    }
};

static const double kVoiceGmmMean[kVoiceGmmNumMixtures][kVoiceGmmDim] =
{
    { -2.15020241646536e+00, 4.97079062999877e+02, 4.77078119504505e+02},
    { -8.92097680029190e-01, 5.92064964199921e+02, 1.81045145941059e+02},
    { -1.29435784144398e+00, 4.98450293410611e+02, 1.71991263804064e+02},
    { -1.03925228397884e+00, 4.99511274321571e+02, 1.05838336539105e+02},
    { -1.29229047206129e+00, 4.15026762566707e+02, 1.12861119017125e+02},
    { -7.88748114599810e-01, 4.48739336688113e+02, 1.89784216956337e+02},
    { -8.77777402332642e-01, 4.86620285054533e+02, 1.13477708016491e+02},
    { -2.06465957063057e+00, 6.33385049870607e+02, 2.32758546796149e+02},
    { -6.98893789231685e-01, 5.93622051503385e+02, 1.92536982473203e+02},
    { -2.55901217508894e+00, 1.55914919756205e+03, 1.39769980835570e+02},
    { -1.92070024165837e+00, 4.87983940444185e+02, 1.02745468128289e+02},
    { -7.29187507662854e-01, 5.22717685022855e+02, 1.16377942283991e+02}
};

static const double kVoiceGmmWeights[kVoiceGmmNumMixtures] =
{
    -1.39789694361035e+01,
    -1.19527720202104e+01,
    -1.32396317929055e+01,
    -1.09436815209238e+01,
    -1.13440027478149e+01,
    -1.12200721834504e+01,
    -1.02537324043693e+01,
    -1.60789861938302e+01,
    -1.03394494048344e+01,
    -1.83207938586818e+01,
    -1.31186044948288e+01,
    -9.52479998673554e+00
};
#endif  // WEBRTC_MODULES_AUDIO_PROCESSING_VAD_VOICE_GMM_TABLES_H_
