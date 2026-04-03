define dso_local i32 @BinarySearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  %13 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  store i32 0, i32* %8
  %16 = load i32, i32* %6
  %17 = sub nsw i32 %16, 1
  store i32 %17, i32* %9
  br label %18
18:
  %19 = load i32, i32* %8
  %20 = load i32, i32* %9
  %21 = icmp sle i32 %19, %20
  br i1 %21, label %22, label %78
22:
  %24 = load i32, i32* %8
  %25 = sdiv i32 %24, 2
  store i32 %25, i32* %10
  %27 = load i32, i32* %9
  %28 = sdiv i32 %27, 2
  store i32 %28, i32* %11
  %30 = load i32, i32* %8
  %31 = srem i32 %30, 2
  %32 = icmp eq i32 %31, 1
  br i1 %32, label %33, label %42
33:
  %34 = load i32, i32* %9
  %35 = srem i32 %34, 2
  %36 = icmp eq i32 %35, 1
  br i1 %36, label %37, label %42
37:
  %38 = load i32, i32* %10
  %39 = load i32, i32* %11
  %40 = add nsw i32 %38, %39
  %41 = add nsw i32 %40, 1
  br label %46
42:
  %43 = load i32, i32* %10
  %44 = load i32, i32* %11
  %45 = add nsw i32 %43, %44
  br label %46
46:
  %47 = phi i32 [ %41, %37 ], [ %45, %42 ]
  store i32 %47, i32* %12
  %48 = load i32*, i32** %5
  %49 = load i32, i32* %12
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  %53 = load i32, i32* %7
  %54 = icmp eq i32 %52, %53
  br i1 %54, label %55, label %57
55:
  %56 = load i32, i32* %12
  store i32 %56, i32* %4
  store i32 1, i32* %13
  br label %72
57:
  %58 = load i32*, i32** %5
  %59 = load i32, i32* %12
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %58, i64 %60
  %62 = load i32, i32* %61
  %63 = load i32, i32* %7
  %64 = icmp slt i32 %62, %63
  br i1 %64, label %65, label %68
65:
  %66 = load i32, i32* %12
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %8
  br label %71
68:
  %69 = load i32, i32* %12
  %70 = sub nsw i32 %69, 1
  store i32 %70, i32* %9
  br label %71
71:
  store i32 0, i32* %13
  br label %72
72:
  %76 = load i32, i32* %13
  switch i32 %76, label %79 [
    i32 0, label %77
  ]
77:
  br label %18
78:
  store i32 -1, i32* %4
  store i32 1, i32* %13
  br label %79
79:
  %82 = load i32, i32* %4
  ret i32 %82
}
