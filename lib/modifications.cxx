#include "modifications.h"
#include <vigra/multi_array.hxx>
#include <vigra/hdf5impex.hxx>

extern "C" 
{
#include "ccv.h"
}

extern "C" int add(int a, int b)
{
    vigra::MultiArrayShape<2>::type Shape2;
    vigra::MultiArray<2, int> array(vigra::Shape2(12,12));
    return a+b;
}

/*
file_name: name of file that should be read in
dataset_name: name of dataset in hdf5 file
output:
probmaps: 
ch: number of channels/classes in probmaps
*/

/*
extern "C" int modified_read(const char *file_name, const char *dataset_name, ccv_dense_matrix_t **probmaps, int ch)
{
    // CCV_32F|4 32 bit float with ch channels: head, upper body, lower body, wings; 0,0: allocate new memory 
    assert(ch<255 && ch>0);
    vigra::HDF5ImportInfo info(file_name, dataset_name);
    vigra::vigra_precondition(info.numDimensions() == 3, "Dataset must be 3-dimensional.");
    //create MulitArray
    vigra::MultiArrayShape<3>::type shape(info.shape().begin());
    vigra::MultiArray<3, float> array(shape);
    vigra::readHDF5(info, array);
    PRINT(CCV_CLI_INFO, "shape: x:\d, y:\d, z:\d \n", shape[0], shape[1], shape[2]);
    for(int i=0; i++; i<shape[0])
    {
        for(int j=0; j++, j<shape[1])
    }
    int rows = info.shape().begin()
    ccv_dense_matrix_t *out = ccv_dense_matrix_new(rows, cols, CCV_32F|ch, 0, 0); 
    int step = out->step, rows = out->rows, cols = out->cols;
    //union tag = out->tag;
    PRINT(CCV_CLI_INFO, "attributes of ccv_dense_matrix_t: \n step: \d, rows = \d, cols = \d \n" ,step, rows, cols);
      
}
*/
