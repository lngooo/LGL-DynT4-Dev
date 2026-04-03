define dso_local i32 @BinarySearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %12 = load i32*, i32** %4
  store i32* %12, i32** %7
  store i32 0, i32* %8
  %15 = load i32, i32* %5
  %16 = call i32 @llvm.ctlz.i32(i32 %15, i1 true)
  %17 = sub nsw i32 31, %16
  %18 = shl i32 1, %17
  store i32 %18, i32* %9
  br label %19
19:
  %20 = load i32, i32* %9
  %21 = icmp sgt i32 %20, 0
  br i1 %21, label %22, label %44
22:
  %24 = load i32, i32* %8
  %25 = load i32, i32* %9
  %26 = or i32 %24, %25
  store i32 %26, i32* %10
  %27 = load i32, i32* %10
  %28 = load i32, i32* %5
  %29 = icmp slt i32 %27, %28
  br i1 %29, label %30, label %40
30:
  %31 = load i32*, i32** %7
  %32 = load i32, i32* %10
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  %36 = load i32, i32* %6
  %37 = icmp sle i32 %35, %36
  br i1 %37, label %38, label %40
38:
  %39 = load i32, i32* %10
  store i32 %39, i32* %8
  br label %40
40:
  %41 = load i32, i32* %9
  %42 = ashr i32 %41, 1
  store i32 %42, i32* %9
  br label %19
44:
  %45 = load i32*, i32** %7
  %46 = load i32, i32* %8
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, i32* %45, i64 %47
  %49 = load i32, i32* %48
  %50 = load i32, i32* %6
  %51 = icmp eq i32 %49, %50
  br i1 %51, label %52, label %54
52:
  %53 = load i32, i32* %8
  br label %55
54:
  br label %55
55:
  %56 = phi i32 [ %53, %52 ], [ -1, %54 ]
  ret i32 %56
}
declare i32 @llvm.ctlz.i32(i32, i1 immarg)
