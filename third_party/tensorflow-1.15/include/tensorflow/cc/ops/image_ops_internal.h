// This file is MACHINE GENERATED! Do not edit.

#ifndef TENSORFLOW_CC_OPS_IMAGE_OPS_INTERNAL_H_
#define TENSORFLOW_CC_OPS_IMAGE_OPS_INTERNAL_H_

// This file is MACHINE GENERATED! Do not edit.

#include "tensorflow/cc/framework/ops.h"
#include "tensorflow/cc/framework/scope.h"
#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/core/framework/tensor_shape.h"
#include "tensorflow/core/framework/types.h"
#include "tensorflow/core/lib/gtl/array_slice.h"

namespace tensorflow {
namespace ops {
namespace internal {
// NOTE: This namespace has internal TensorFlow details that
// are not part of TensorFlow's public API.

/// @defgroup image_ops_internal Image Ops Internal
/// @{

/// This op produces Region of Interests from given bounding boxes(bbox_deltas) encoded wrt anchors according to eq.2 in arXiv:1506.01497
///
///       The op selects top `pre_nms_topn` scoring boxes, decodes them with respect to anchors,
///       applies non-maximal suppression on overlapping boxes with higher than
///       `nms_threshold` intersection-over-union (iou) value, discarding boxes where shorter
///       side is less than `min_size`.
///       Inputs:
///       `scores`: A 4D tensor of shape [Batch, Height, Width, Num Anchors] containing the scores per anchor at given postion
///       `bbox_deltas`: is a tensor of shape [Batch, Height, Width, 4 x Num Anchors] boxes encoded to each anchor
///       `anchors`: A 1D tensor of shape [4 x Num Anchors], representing the anchors.
///       Outputs:
///       `rois`: output RoIs, a 3D tensor of shape [Batch, post_nms_topn, 4], padded by 0 if less than post_nms_topn candidates found.
///       `roi_probabilities`: probability scores of each roi in 'rois', a 2D tensor of shape [Batch,post_nms_topn], padded with 0 if needed, sorted by scores.
///
/// Arguments:
/// * scope: A Scope object
/// * scores: A 4-D float tensor of shape `[num_images, height, width, num_achors]` containing scores of the boxes for given anchors, can be unsorted.
/// * bbox_deltas: A 4-D float tensor of shape `[num_images, height, width, 4 x num_anchors]`. encoding boxes with respec to each anchor.
/// Coordinates are given in the form [dy, dx, dh, dw].
/// * image_info: A 2-D float tensor of shape `[num_images, 5]` containing image information Height, Width, Scale.
/// * anchors: A 2-D float tensor of shape `[num_anchors, 4]` describing the anchor boxes. Boxes are formatted in the form [y1, x1, y2, x2].
/// * nms_threshold: A scalar float tensor for non-maximal-suppression threshold.
/// * pre_nms_topn: A scalar int tensor for the number of top scoring boxes to be used as input.
/// * min_size: A scalar float tensor. Any box that has a smaller size than min_size will be discarded.
///
/// Optional attributes (see `Attrs`):
/// * post_nms_topn: An integer. Maximum number of rois in the output.
///
/// Returns:
/// * `Output` rois: A 3-D float tensor of shape `[num_images,post_nms_topn,4]` representing the selected
/// region of interest boxes. Sorted in descending order in scores.
/// * `Output` roi_probabilities: A 2-D float tensor of shape `[num_images, post_nms_topn]` representing the score of the
/// region of interest box in `rois` tensor at the same index.
class GenerateBoundingBoxProposals {
 public:
  /// Optional attribute setters for GenerateBoundingBoxProposals
  struct Attrs {
    /// An integer. Maximum number of rois in the output.
    ///
    /// Defaults to 300
    TF_MUST_USE_RESULT Attrs PostNmsTopn(int64 x) {
      Attrs ret = *this;
      ret.post_nms_topn_ = x;
      return ret;
    }

    int64 post_nms_topn_ = 300;
  };
  GenerateBoundingBoxProposals(const ::tensorflow::Scope& scope,
                             ::tensorflow::Input scores, ::tensorflow::Input
                             bbox_deltas, ::tensorflow::Input image_info,
                             ::tensorflow::Input anchors, ::tensorflow::Input
                             nms_threshold, ::tensorflow::Input pre_nms_topn,
                             ::tensorflow::Input min_size);
  GenerateBoundingBoxProposals(const ::tensorflow::Scope& scope,
                             ::tensorflow::Input scores, ::tensorflow::Input
                             bbox_deltas, ::tensorflow::Input image_info,
                             ::tensorflow::Input anchors, ::tensorflow::Input
                             nms_threshold, ::tensorflow::Input pre_nms_topn,
                             ::tensorflow::Input min_size, const
                             GenerateBoundingBoxProposals::Attrs& attrs);

  static Attrs PostNmsTopn(int64 x) {
    return Attrs().PostNmsTopn(x);
  }

  Operation operation;
  ::tensorflow::Output rois;
  ::tensorflow::Output roi_probabilities;
};

/// Computes the gradient of bicubic interpolation.
///
/// Arguments:
/// * scope: A Scope object
/// * grads: 4-D with shape `[batch, height, width, channels]`.
/// * original_image: 4-D with shape `[batch, orig_height, orig_width, channels]`,
/// The image tensor that was resized.
///
/// Optional attributes (see `Attrs`):
/// * align_corners: If true, the centers of the 4 corner pixels of the input and grad tensors are
/// aligned. Defaults to false.
///
/// Returns:
/// * `Output`: 4-D with shape `[batch, orig_height, orig_width, channels]`.
/// Gradients with respect to the input image. Input image must have been
/// float or double.
class ResizeBicubicGrad {
 public:
  /// Optional attribute setters for ResizeBicubicGrad
  struct Attrs {
    /// If true, the centers of the 4 corner pixels of the input and grad tensors are
    /// aligned. Defaults to false.
    ///
    /// Defaults to false
    TF_MUST_USE_RESULT Attrs AlignCorners(bool x) {
      Attrs ret = *this;
      ret.align_corners_ = x;
      return ret;
    }

    /// Defaults to false
    TF_MUST_USE_RESULT Attrs HalfPixelCenters(bool x) {
      Attrs ret = *this;
      ret.half_pixel_centers_ = x;
      return ret;
    }

    bool align_corners_ = false;
    bool half_pixel_centers_ = false;
  };
  ResizeBicubicGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input grads,
                  ::tensorflow::Input original_image);
  ResizeBicubicGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input grads,
                  ::tensorflow::Input original_image, const
                  ResizeBicubicGrad::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs AlignCorners(bool x) {
    return Attrs().AlignCorners(x);
  }
  static Attrs HalfPixelCenters(bool x) {
    return Attrs().HalfPixelCenters(x);
  }

  Operation operation;
  ::tensorflow::Output output;
};

/// Computes the gradient of bilinear interpolation.
///
/// Arguments:
/// * scope: A Scope object
/// * grads: 4-D with shape `[batch, height, width, channels]`.
/// * original_image: 4-D with shape `[batch, orig_height, orig_width, channels]`,
/// The image tensor that was resized.
///
/// Optional attributes (see `Attrs`):
/// * align_corners: If true, the centers of the 4 corner pixels of the input and grad tensors are
/// aligned. Defaults to false.
///
/// Returns:
/// * `Output`: 4-D with shape `[batch, orig_height, orig_width, channels]`.
/// Gradients with respect to the input image. Input image must have been
/// float or double.
class ResizeBilinearGrad {
 public:
  /// Optional attribute setters for ResizeBilinearGrad
  struct Attrs {
    /// If true, the centers of the 4 corner pixels of the input and grad tensors are
    /// aligned. Defaults to false.
    ///
    /// Defaults to false
    TF_MUST_USE_RESULT Attrs AlignCorners(bool x) {
      Attrs ret = *this;
      ret.align_corners_ = x;
      return ret;
    }

    /// Defaults to false
    TF_MUST_USE_RESULT Attrs HalfPixelCenters(bool x) {
      Attrs ret = *this;
      ret.half_pixel_centers_ = x;
      return ret;
    }

    bool align_corners_ = false;
    bool half_pixel_centers_ = false;
  };
  ResizeBilinearGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input grads,
                   ::tensorflow::Input original_image);
  ResizeBilinearGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input grads,
                   ::tensorflow::Input original_image, const
                   ResizeBilinearGrad::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs AlignCorners(bool x) {
    return Attrs().AlignCorners(x);
  }
  static Attrs HalfPixelCenters(bool x) {
    return Attrs().HalfPixelCenters(x);
  }

  Operation operation;
  ::tensorflow::Output output;
};

/// Computes the gradient of nearest neighbor interpolation.
///
/// Arguments:
/// * scope: A Scope object
/// * grads: 4-D with shape `[batch, height, width, channels]`.
/// * size: = A 1-D int32 Tensor of 2 elements: `orig_height, orig_width`. The
/// original input size.
///
/// Optional attributes (see `Attrs`):
/// * align_corners: If true, the centers of the 4 corner pixels of the input and grad tensors are
/// aligned. Defaults to false.
///
/// Returns:
/// * `Output`: 4-D with shape `[batch, orig_height, orig_width, channels]`. Gradients
/// with respect to the input image.
class ResizeNearestNeighborGrad {
 public:
  /// Optional attribute setters for ResizeNearestNeighborGrad
  struct Attrs {
    /// If true, the centers of the 4 corner pixels of the input and grad tensors are
    /// aligned. Defaults to false.
    ///
    /// Defaults to false
    TF_MUST_USE_RESULT Attrs AlignCorners(bool x) {
      Attrs ret = *this;
      ret.align_corners_ = x;
      return ret;
    }

    /// Defaults to false
    TF_MUST_USE_RESULT Attrs HalfPixelCenters(bool x) {
      Attrs ret = *this;
      ret.half_pixel_centers_ = x;
      return ret;
    }

    bool align_corners_ = false;
    bool half_pixel_centers_ = false;
  };
  ResizeNearestNeighborGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input
                          grads, ::tensorflow::Input size);
  ResizeNearestNeighborGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input
                          grads, ::tensorflow::Input size, const
                          ResizeNearestNeighborGrad::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs AlignCorners(bool x) {
    return Attrs().AlignCorners(x);
  }
  static Attrs HalfPixelCenters(bool x) {
    return Attrs().HalfPixelCenters(x);
  }

  Operation operation;
  ::tensorflow::Output output;
};

/// TODO: add doc.
///
/// Arguments:
/// * scope: A Scope object
///
/// Returns:
/// * `Output`: The output tensor.
class ScaleAndTranslateGrad {
 public:
  /// Optional attribute setters for ScaleAndTranslateGrad
  struct Attrs {
    /// Defaults to "lanczos3"
    TF_MUST_USE_RESULT Attrs KernelType(StringPiece x) {
      Attrs ret = *this;
      ret.kernel_type_ = x;
      return ret;
    }

    /// Defaults to true
    TF_MUST_USE_RESULT Attrs Antialias(bool x) {
      Attrs ret = *this;
      ret.antialias_ = x;
      return ret;
    }

    StringPiece kernel_type_ = "lanczos3";
    bool antialias_ = true;
  };
  ScaleAndTranslateGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input
                      grads, ::tensorflow::Input original_image,
                      ::tensorflow::Input scale, ::tensorflow::Input
                      translation);
  ScaleAndTranslateGrad(const ::tensorflow::Scope& scope, ::tensorflow::Input
                      grads, ::tensorflow::Input original_image,
                      ::tensorflow::Input scale, ::tensorflow::Input
                      translation, const ScaleAndTranslateGrad::Attrs& attrs);
  operator ::tensorflow::Output() const { return output; }
  operator ::tensorflow::Input() const { return output; }
  ::tensorflow::Node* node() const { return output.node(); }

  static Attrs KernelType(StringPiece x) {
    return Attrs().KernelType(x);
  }
  static Attrs Antialias(bool x) {
    return Attrs().Antialias(x);
  }

  Operation operation;
  ::tensorflow::Output output;
};

}  // namespace internal
}  // namespace ops
}  // namespace tensorflow

#endif  // TENSORFLOW_CC_OPS_IMAGE_OPS_INTERNAL_H_
