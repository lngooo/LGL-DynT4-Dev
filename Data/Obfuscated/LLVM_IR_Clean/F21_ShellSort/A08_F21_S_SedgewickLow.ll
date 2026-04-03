@__const.A.Jm = constant [5 x i32] [i32 109, i32 41, i32 19, i32 5, i32 1]
define dso_local void @A(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca [5 x i32]
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %6
  br label %15
15:
  %16 = load i32, i32* %6
  %17 = icmp slt i32 %16, 5
  br i1 %17, label %20, label %18
18:
  store i32 2, i32* %7
  br label %98
20:
  %22 = load i32, i32* %6
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds [5 x i32], [5 x i32]* %5, i64 0, i64 %23
  %25 = load i32, i32* %24
  store i32 %25, i32* %8
  %26 = load i32, i32* %8
  %27 = load i32, i32* %4
  %28 = icmp sge i32 %26, %27
  br i1 %28, label %29, label %30
29:
  store i32 4, i32* %7
  br label %91
30:
  %32 = load i32, i32* %8
  store i32 %32, i32* %9
  br label %33
33:
  %34 = load i32, i32* %9
  %35 = load i32, i32* %4
  %36 = icmp slt i32 %34, %35
  br i1 %36, label %39, label %37
37:
  store i32 5, i32* %7
  br label %90
39:
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %9
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  store i32 %45, i32* %10
  %47 = load i32, i32* %9
  store i32 %47, i32* %11
  br label %48
48:
  %49 = load i32, i32* %11
  %50 = load i32, i32* %8
  %51 = icmp sge i32 %49, %50
  br i1 %51, label %52, label %62
52:
  %53 = load i32*, i32** %3
  %54 = load i32, i32* %11
  %55 = load i32, i32* %8
  %56 = sub nsw i32 %54, %55
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %53, i64 %57
  %59 = load i32, i32* %58
  %60 = load i32, i32* %10
  %61 = icmp sgt i32 %59, %60
  br label %62
62:
  %63 = phi i1 [ false, %48 ], [ %61, %52 ]
  br i1 %63, label %64, label %79
64:
  %65 = load i32*, i32** %3
  %66 = load i32, i32* %11
  %67 = load i32, i32* %8
  %68 = sub nsw i32 %66, %67
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i32, i32* %65, i64 %69
  %71 = load i32, i32* %70
  %72 = load i32*, i32** %3
  %73 = load i32, i32* %11
  %74 = sext i32 %73 to i64
  %75 = getelementptr inbounds i32, i32* %72, i64 %74
  store i32 %71, i32* %75
  %76 = load i32, i32* %8
  %77 = load i32, i32* %11
  %78 = sub nsw i32 %77, %76
  store i32 %78, i32* %11
  br label %48
79:
  %80 = load i32, i32* %10
  %81 = load i32*, i32** %3
  %82 = load i32, i32* %11
  %83 = sext i32 %82 to i64
  %84 = getelementptr inbounds i32, i32* %81, i64 %83
  store i32 %80, i32* %84
  br label %87
87:
  %88 = load i32, i32* %9
  %89 = add nsw i32 %88, 1
  store i32 %89, i32* %9
  br label %33
90:
  store i32 0, i32* %7
  br label %91
91:
  %93 = load i32, i32* %7
  switch i32 %93, label %100 [
    i32 0, label %94
    i32 4, label %95
  ]
94:
  br label %95
95:
  %96 = load i32, i32* %6
  %97 = add nsw i32 %96, 1
  store i32 %97, i32* %6
  br label %15
98:
  ret void
100:
  unreachable
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
