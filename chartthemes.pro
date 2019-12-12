QT += charts
requires(qtConfig(combobox))

HEADERS += \
    CGTeaMainWindow.h \
    DistinctColors.h \
    GWidget.h \
    GraphRelatedGatherer.h \
    cgtea/Eigen/Cholesky \
    cgtea/Eigen/CholmodSupport \
    cgtea/Eigen/Core \
    cgtea/Eigen/Dense \
    cgtea/Eigen/Eigen \
    cgtea/Eigen/Eigenvalues \
    cgtea/Eigen/Geometry \
    cgtea/Eigen/Householder \
    cgtea/Eigen/IterativeLinearSolvers \
    cgtea/Eigen/Jacobi \
    cgtea/Eigen/LU \
    cgtea/Eigen/MetisSupport \
    cgtea/Eigen/OrderingMethods \
    cgtea/Eigen/PaStiXSupport \
    cgtea/Eigen/PardisoSupport \
    cgtea/Eigen/QR \
    cgtea/Eigen/QtAlignedMalloc \
    cgtea/Eigen/SPQRSupport \
    cgtea/Eigen/SVD \
    cgtea/Eigen/Sparse \
    cgtea/Eigen/SparseCholesky \
    cgtea/Eigen/SparseCore \
    cgtea/Eigen/SparseLU \
    cgtea/Eigen/SparseQR \
    cgtea/Eigen/StdDeque \
    cgtea/Eigen/StdList \
    cgtea/Eigen/StdVector \
    cgtea/Eigen/SuperLUSupport \
    cgtea/Eigen/UmfPackSupport \
    cgtea/Eigen/src/Cholesky/LDLT.h \
    cgtea/Eigen/src/Cholesky/LLT.h \
    cgtea/Eigen/src/Cholesky/LLT_LAPACKE.h \
    cgtea/Eigen/src/CholmodSupport/CholmodSupport.h \
    cgtea/Eigen/src/Core/Array.h \
    cgtea/Eigen/src/Core/ArrayBase.h \
    cgtea/Eigen/src/Core/ArrayWrapper.h \
    cgtea/Eigen/src/Core/Assign.h \
    cgtea/Eigen/src/Core/AssignEvaluator.h \
    cgtea/Eigen/src/Core/Assign_MKL.h \
    cgtea/Eigen/src/Core/BandMatrix.h \
    cgtea/Eigen/src/Core/Block.h \
    cgtea/Eigen/src/Core/BooleanRedux.h \
    cgtea/Eigen/src/Core/CommaInitializer.h \
    cgtea/Eigen/src/Core/ConditionEstimator.h \
    cgtea/Eigen/src/Core/CoreEvaluators.h \
    cgtea/Eigen/src/Core/CoreIterators.h \
    cgtea/Eigen/src/Core/CwiseBinaryOp.h \
    cgtea/Eigen/src/Core/CwiseNullaryOp.h \
    cgtea/Eigen/src/Core/CwiseTernaryOp.h \
    cgtea/Eigen/src/Core/CwiseUnaryOp.h \
    cgtea/Eigen/src/Core/CwiseUnaryView.h \
    cgtea/Eigen/src/Core/DenseBase.h \
    cgtea/Eigen/src/Core/DenseCoeffsBase.h \
    cgtea/Eigen/src/Core/DenseStorage.h \
    cgtea/Eigen/src/Core/Diagonal.h \
    cgtea/Eigen/src/Core/DiagonalMatrix.h \
    cgtea/Eigen/src/Core/DiagonalProduct.h \
    cgtea/Eigen/src/Core/Dot.h \
    cgtea/Eigen/src/Core/EigenBase.h \
    cgtea/Eigen/src/Core/ForceAlignedAccess.h \
    cgtea/Eigen/src/Core/Fuzzy.h \
    cgtea/Eigen/src/Core/GeneralProduct.h \
    cgtea/Eigen/src/Core/GenericPacketMath.h \
    cgtea/Eigen/src/Core/GlobalFunctions.h \
    cgtea/Eigen/src/Core/IO.h \
    cgtea/Eigen/src/Core/Inverse.h \
    cgtea/Eigen/src/Core/Map.h \
    cgtea/Eigen/src/Core/MapBase.h \
    cgtea/Eigen/src/Core/MathFunctions.h \
    cgtea/Eigen/src/Core/MathFunctionsImpl.h \
    cgtea/Eigen/src/Core/Matrix.h \
    cgtea/Eigen/src/Core/MatrixBase.h \
    cgtea/Eigen/src/Core/NestByValue.h \
    cgtea/Eigen/src/Core/NoAlias.h \
    cgtea/Eigen/src/Core/NumTraits.h \
    cgtea/Eigen/src/Core/PermutationMatrix.h \
    cgtea/Eigen/src/Core/PlainObjectBase.h \
    cgtea/Eigen/src/Core/Product.h \
    cgtea/Eigen/src/Core/ProductEvaluators.h \
    cgtea/Eigen/src/Core/Random.h \
    cgtea/Eigen/src/Core/Redux.h \
    cgtea/Eigen/src/Core/Ref.h \
    cgtea/Eigen/src/Core/Replicate.h \
    cgtea/Eigen/src/Core/ReturnByValue.h \
    cgtea/Eigen/src/Core/Reverse.h \
    cgtea/Eigen/src/Core/Select.h \
    cgtea/Eigen/src/Core/SelfAdjointView.h \
    cgtea/Eigen/src/Core/SelfCwiseBinaryOp.h \
    cgtea/Eigen/src/Core/Solve.h \
    cgtea/Eigen/src/Core/SolveTriangular.h \
    cgtea/Eigen/src/Core/SolverBase.h \
    cgtea/Eigen/src/Core/StableNorm.h \
    cgtea/Eigen/src/Core/Stride.h \
    cgtea/Eigen/src/Core/Swap.h \
    cgtea/Eigen/src/Core/Transpose.h \
    cgtea/Eigen/src/Core/Transpositions.h \
    cgtea/Eigen/src/Core/TriangularMatrix.h \
    cgtea/Eigen/src/Core/VectorBlock.h \
    cgtea/Eigen/src/Core/VectorwiseOp.h \
    cgtea/Eigen/src/Core/Visitor.h \
    cgtea/Eigen/src/Core/arch/AVX/Complex.h \
    cgtea/Eigen/src/Core/arch/AVX/MathFunctions.h \
    cgtea/Eigen/src/Core/arch/AVX/PacketMath.h \
    cgtea/Eigen/src/Core/arch/AVX/TypeCasting.h \
    cgtea/Eigen/src/Core/arch/AVX512/MathFunctions.h \
    cgtea/Eigen/src/Core/arch/AVX512/PacketMath.h \
    cgtea/Eigen/src/Core/arch/AltiVec/Complex.h \
    cgtea/Eigen/src/Core/arch/AltiVec/MathFunctions.h \
    cgtea/Eigen/src/Core/arch/AltiVec/PacketMath.h \
    cgtea/Eigen/src/Core/arch/CUDA/Complex.h \
    cgtea/Eigen/src/Core/arch/CUDA/Half.h \
    cgtea/Eigen/src/Core/arch/CUDA/MathFunctions.h \
    cgtea/Eigen/src/Core/arch/CUDA/PacketMath.h \
    cgtea/Eigen/src/Core/arch/CUDA/PacketMathHalf.h \
    cgtea/Eigen/src/Core/arch/CUDA/TypeCasting.h \
    cgtea/Eigen/src/Core/arch/Default/ConjHelper.h \
    cgtea/Eigen/src/Core/arch/Default/Settings.h \
    cgtea/Eigen/src/Core/arch/NEON/Complex.h \
    cgtea/Eigen/src/Core/arch/NEON/MathFunctions.h \
    cgtea/Eigen/src/Core/arch/NEON/PacketMath.h \
    cgtea/Eigen/src/Core/arch/SSE/Complex.h \
    cgtea/Eigen/src/Core/arch/SSE/MathFunctions.h \
    cgtea/Eigen/src/Core/arch/SSE/PacketMath.h \
    cgtea/Eigen/src/Core/arch/SSE/TypeCasting.h \
    cgtea/Eigen/src/Core/arch/ZVector/Complex.h \
    cgtea/Eigen/src/Core/arch/ZVector/MathFunctions.h \
    cgtea/Eigen/src/Core/arch/ZVector/PacketMath.h \
    cgtea/Eigen/src/Core/functors/AssignmentFunctors.h \
    cgtea/Eigen/src/Core/functors/BinaryFunctors.h \
    cgtea/Eigen/src/Core/functors/NullaryFunctors.h \
    cgtea/Eigen/src/Core/functors/StlFunctors.h \
    cgtea/Eigen/src/Core/functors/TernaryFunctors.h \
    cgtea/Eigen/src/Core/functors/UnaryFunctors.h \
    cgtea/Eigen/src/Core/products/GeneralBlockPanelKernel.h \
    cgtea/Eigen/src/Core/products/GeneralMatrixMatrix.h \
    cgtea/Eigen/src/Core/products/GeneralMatrixMatrixTriangular.h \
    cgtea/Eigen/src/Core/products/GeneralMatrixMatrixTriangular_BLAS.h \
    cgtea/Eigen/src/Core/products/GeneralMatrixMatrix_BLAS.h \
    cgtea/Eigen/src/Core/products/GeneralMatrixVector.h \
    cgtea/Eigen/src/Core/products/GeneralMatrixVector_BLAS.h \
    cgtea/Eigen/src/Core/products/Parallelizer.h \
    cgtea/Eigen/src/Core/products/SelfadjointMatrixMatrix.h \
    cgtea/Eigen/src/Core/products/SelfadjointMatrixMatrix_BLAS.h \
    cgtea/Eigen/src/Core/products/SelfadjointMatrixVector.h \
    cgtea/Eigen/src/Core/products/SelfadjointMatrixVector_BLAS.h \
    cgtea/Eigen/src/Core/products/SelfadjointProduct.h \
    cgtea/Eigen/src/Core/products/SelfadjointRank2Update.h \
    cgtea/Eigen/src/Core/products/TriangularMatrixMatrix.h \
    cgtea/Eigen/src/Core/products/TriangularMatrixMatrix_BLAS.h \
    cgtea/Eigen/src/Core/products/TriangularMatrixVector.h \
    cgtea/Eigen/src/Core/products/TriangularMatrixVector_BLAS.h \
    cgtea/Eigen/src/Core/products/TriangularSolverMatrix.h \
    cgtea/Eigen/src/Core/products/TriangularSolverMatrix_BLAS.h \
    cgtea/Eigen/src/Core/products/TriangularSolverVector.h \
    cgtea/Eigen/src/Core/util/BlasUtil.h \
    cgtea/Eigen/src/Core/util/Constants.h \
    cgtea/Eigen/src/Core/util/DisableStupidWarnings.h \
    cgtea/Eigen/src/Core/util/ForwardDeclarations.h \
    cgtea/Eigen/src/Core/util/MKL_support.h \
    cgtea/Eigen/src/Core/util/Macros.h \
    cgtea/Eigen/src/Core/util/Memory.h \
    cgtea/Eigen/src/Core/util/Meta.h \
    cgtea/Eigen/src/Core/util/NonMPL2.h \
    cgtea/Eigen/src/Core/util/ReenableStupidWarnings.h \
    cgtea/Eigen/src/Core/util/StaticAssert.h \
    cgtea/Eigen/src/Core/util/XprHelper.h \
    cgtea/Eigen/src/Eigenvalues/ComplexEigenSolver.h \
    cgtea/Eigen/src/Eigenvalues/ComplexSchur.h \
    cgtea/Eigen/src/Eigenvalues/ComplexSchur_LAPACKE.h \
    cgtea/Eigen/src/Eigenvalues/EigenSolver.h \
    cgtea/Eigen/src/Eigenvalues/GeneralizedEigenSolver.h \
    cgtea/Eigen/src/Eigenvalues/GeneralizedSelfAdjointEigenSolver.h \
    cgtea/Eigen/src/Eigenvalues/HessenbergDecomposition.h \
    cgtea/Eigen/src/Eigenvalues/MatrixBaseEigenvalues.h \
    cgtea/Eigen/src/Eigenvalues/RealQZ.h \
    cgtea/Eigen/src/Eigenvalues/RealSchur.h \
    cgtea/Eigen/src/Eigenvalues/RealSchur_LAPACKE.h \
    cgtea/Eigen/src/Eigenvalues/SelfAdjointEigenSolver.h \
    cgtea/Eigen/src/Eigenvalues/SelfAdjointEigenSolver_LAPACKE.h \
    cgtea/Eigen/src/Eigenvalues/Tridiagonalization.h \
    cgtea/Eigen/src/Geometry/AlignedBox.h \
    cgtea/Eigen/src/Geometry/AngleAxis.h \
    cgtea/Eigen/src/Geometry/EulerAngles.h \
    cgtea/Eigen/src/Geometry/Homogeneous.h \
    cgtea/Eigen/src/Geometry/Hyperplane.h \
    cgtea/Eigen/src/Geometry/OrthoMethods.h \
    cgtea/Eigen/src/Geometry/ParametrizedLine.h \
    cgtea/Eigen/src/Geometry/Quaternion.h \
    cgtea/Eigen/src/Geometry/Rotation2D.h \
    cgtea/Eigen/src/Geometry/RotationBase.h \
    cgtea/Eigen/src/Geometry/Scaling.h \
    cgtea/Eigen/src/Geometry/Transform.h \
    cgtea/Eigen/src/Geometry/Translation.h \
    cgtea/Eigen/src/Geometry/Umeyama.h \
    cgtea/Eigen/src/Geometry/arch/Geometry_SSE.h \
    cgtea/Eigen/src/Householder/BlockHouseholder.h \
    cgtea/Eigen/src/Householder/Householder.h \
    cgtea/Eigen/src/Householder/HouseholderSequence.h \
    cgtea/Eigen/src/IterativeLinearSolvers/BasicPreconditioners.h \
    cgtea/Eigen/src/IterativeLinearSolvers/BiCGSTAB.h \
    cgtea/Eigen/src/IterativeLinearSolvers/ConjugateGradient.h \
    cgtea/Eigen/src/IterativeLinearSolvers/IncompleteCholesky.h \
    cgtea/Eigen/src/IterativeLinearSolvers/IncompleteLUT.h \
    cgtea/Eigen/src/IterativeLinearSolvers/IterativeSolverBase.h \
    cgtea/Eigen/src/IterativeLinearSolvers/LeastSquareConjugateGradient.h \
    cgtea/Eigen/src/IterativeLinearSolvers/SolveWithGuess.h \
    cgtea/Eigen/src/Jacobi/Jacobi.h \
    cgtea/Eigen/src/LU/Determinant.h \
    cgtea/Eigen/src/LU/FullPivLU.h \
    cgtea/Eigen/src/LU/InverseImpl.h \
    cgtea/Eigen/src/LU/PartialPivLU.h \
    cgtea/Eigen/src/LU/PartialPivLU_LAPACKE.h \
    cgtea/Eigen/src/LU/arch/Inverse_SSE.h \
    cgtea/Eigen/src/MetisSupport/MetisSupport.h \
    cgtea/Eigen/src/OrderingMethods/Amd.h \
    cgtea/Eigen/src/OrderingMethods/Eigen_Colamd.h \
    cgtea/Eigen/src/OrderingMethods/Ordering.h \
    cgtea/Eigen/src/PaStiXSupport/PaStiXSupport.h \
    cgtea/Eigen/src/PardisoSupport/PardisoSupport.h \
    cgtea/Eigen/src/QR/ColPivHouseholderQR.h \
    cgtea/Eigen/src/QR/ColPivHouseholderQR_LAPACKE.h \
    cgtea/Eigen/src/QR/CompleteOrthogonalDecomposition.h \
    cgtea/Eigen/src/QR/FullPivHouseholderQR.h \
    cgtea/Eigen/src/QR/HouseholderQR.h \
    cgtea/Eigen/src/QR/HouseholderQR_LAPACKE.h \
    cgtea/Eigen/src/SPQRSupport/SuiteSparseQRSupport.h \
    cgtea/Eigen/src/SVD/BDCSVD.h \
    cgtea/Eigen/src/SVD/JacobiSVD.h \
    cgtea/Eigen/src/SVD/JacobiSVD_LAPACKE.h \
    cgtea/Eigen/src/SVD/SVDBase.h \
    cgtea/Eigen/src/SVD/UpperBidiagonalization.h \
    cgtea/Eigen/src/SparseCholesky/SimplicialCholesky.h \
    cgtea/Eigen/src/SparseCholesky/SimplicialCholesky_impl.h \
    cgtea/Eigen/src/SparseCore/AmbiVector.h \
    cgtea/Eigen/src/SparseCore/CompressedStorage.h \
    cgtea/Eigen/src/SparseCore/ConservativeSparseSparseProduct.h \
    cgtea/Eigen/src/SparseCore/MappedSparseMatrix.h \
    cgtea/Eigen/src/SparseCore/SparseAssign.h \
    cgtea/Eigen/src/SparseCore/SparseBlock.h \
    cgtea/Eigen/src/SparseCore/SparseColEtree.h \
    cgtea/Eigen/src/SparseCore/SparseCompressedBase.h \
    cgtea/Eigen/src/SparseCore/SparseCwiseBinaryOp.h \
    cgtea/Eigen/src/SparseCore/SparseCwiseUnaryOp.h \
    cgtea/Eigen/src/SparseCore/SparseDenseProduct.h \
    cgtea/Eigen/src/SparseCore/SparseDiagonalProduct.h \
    cgtea/Eigen/src/SparseCore/SparseDot.h \
    cgtea/Eigen/src/SparseCore/SparseFuzzy.h \
    cgtea/Eigen/src/SparseCore/SparseMap.h \
    cgtea/Eigen/src/SparseCore/SparseMatrix.h \
    cgtea/Eigen/src/SparseCore/SparseMatrixBase.h \
    cgtea/Eigen/src/SparseCore/SparsePermutation.h \
    cgtea/Eigen/src/SparseCore/SparseProduct.h \
    cgtea/Eigen/src/SparseCore/SparseRedux.h \
    cgtea/Eigen/src/SparseCore/SparseRef.h \
    cgtea/Eigen/src/SparseCore/SparseSelfAdjointView.h \
    cgtea/Eigen/src/SparseCore/SparseSolverBase.h \
    cgtea/Eigen/src/SparseCore/SparseSparseProductWithPruning.h \
    cgtea/Eigen/src/SparseCore/SparseTranspose.h \
    cgtea/Eigen/src/SparseCore/SparseTriangularView.h \
    cgtea/Eigen/src/SparseCore/SparseUtil.h \
    cgtea/Eigen/src/SparseCore/SparseVector.h \
    cgtea/Eigen/src/SparseCore/SparseView.h \
    cgtea/Eigen/src/SparseCore/TriangularSolver.h \
    cgtea/Eigen/src/SparseLU/SparseLU.h \
    cgtea/Eigen/src/SparseLU/SparseLUImpl.h \
    cgtea/Eigen/src/SparseLU/SparseLU_Memory.h \
    cgtea/Eigen/src/SparseLU/SparseLU_Structs.h \
    cgtea/Eigen/src/SparseLU/SparseLU_SupernodalMatrix.h \
    cgtea/Eigen/src/SparseLU/SparseLU_Utils.h \
    cgtea/Eigen/src/SparseLU/SparseLU_column_bmod.h \
    cgtea/Eigen/src/SparseLU/SparseLU_column_dfs.h \
    cgtea/Eigen/src/SparseLU/SparseLU_copy_to_ucol.h \
    cgtea/Eigen/src/SparseLU/SparseLU_gemm_kernel.h \
    cgtea/Eigen/src/SparseLU/SparseLU_heap_relax_snode.h \
    cgtea/Eigen/src/SparseLU/SparseLU_kernel_bmod.h \
    cgtea/Eigen/src/SparseLU/SparseLU_panel_bmod.h \
    cgtea/Eigen/src/SparseLU/SparseLU_panel_dfs.h \
    cgtea/Eigen/src/SparseLU/SparseLU_pivotL.h \
    cgtea/Eigen/src/SparseLU/SparseLU_pruneL.h \
    cgtea/Eigen/src/SparseLU/SparseLU_relax_snode.h \
    cgtea/Eigen/src/SparseQR/SparseQR.h \
    cgtea/Eigen/src/StlSupport/StdDeque.h \
    cgtea/Eigen/src/StlSupport/StdList.h \
    cgtea/Eigen/src/StlSupport/StdVector.h \
    cgtea/Eigen/src/StlSupport/details.h \
    cgtea/Eigen/src/SuperLUSupport/SuperLUSupport.h \
    cgtea/Eigen/src/UmfPackSupport/UmfPackSupport.h \
    cgtea/Eigen/src/misc/Image.h \
    cgtea/Eigen/src/misc/Kernel.h \
    cgtea/Eigen/src/misc/RealSvd2x2.h \
    cgtea/Eigen/src/misc/blas.h \
    cgtea/Eigen/src/misc/lapack.h \
    cgtea/Eigen/src/misc/lapacke.h \
    cgtea/Eigen/src/misc/lapacke_mangling.h \
    cgtea/Eigen/src/plugins/ArrayCwiseBinaryOps.h \
    cgtea/Eigen/src/plugins/ArrayCwiseUnaryOps.h \
    cgtea/Eigen/src/plugins/BlockMethods.h \
    cgtea/Eigen/src/plugins/CommonCwiseBinaryOps.h \
    cgtea/Eigen/src/plugins/CommonCwiseUnaryOps.h \
    cgtea/Eigen/src/plugins/MatrixCwiseBinaryOps.h \
    cgtea/Eigen/src/plugins/MatrixCwiseUnaryOps.h \
    cgtea/G6Format/G6Format.h \
    cgtea/actions/ActionInterface.h \
    cgtea/actions/Coloring.h \
    cgtea/datatypes.h \
    cgtea/generators/Antiprism.h \
    cgtea/generators/Banana.h \
    cgtea/generators/Complete.h \
    cgtea/generators/Cycle.h \
    cgtea/generators/GeneralizedPeterson.h \
    cgtea/generators/GeneratorInterface.h \
    cgtea/generators/PositionGenerator.h \
    cgtea/generators/Prism.h \
    cgtea/generators/Regular.h \
    cgtea/generators/Star.h \
    cgtea/generators/compute_force_directed.h \
    cgtea/generators/point.h \
    cgtea/reports/MaxDegree.h \
    cgtea/reports/MaxEigenValue.h \
    cgtea/reports/MinEigenValue.h \
    cgtea/reports/NumOfEdges.h \
    cgtea/reports/NumOfVertices.h \
    cgtea/reports/ReportInterface.h \
    cgtea/reports/SumEigenValues.h \
    cgteaqt.h

SOURCES += \
    CGTeaMainWindow.cpp \
    cgtea/generators/compute_force_directed.cpp \
    cgteaqt.cpp \
    main.cpp

target.path = $$[QT_INSTALL_EXAMPLES]/charts/chartthemes
INSTALLS += target

FORMS += \
    cgteaqt.ui

DISTFILES += \
    cgtea/Eigen/CMakeLists.txt \
    cgtea/reports/Eigen/CMakeLists.txt
