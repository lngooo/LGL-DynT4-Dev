define dso_local i32 @cJ(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  store i32 0, i32* %7
  %13 = load i32, i32* %5
  %14 = call i32 @llvm.ctlz.i32(i32 %13, i1 true)
  %15 = sub nsw i32 31, %14
  store i32 %15, i32* %8
  %17 = load i32, i32* %8
  store i32 %17, i32* %9
  br label %18
18:
  %19 = load i32, i32* %9
  %20 = icmp sge i32 %19, 0
  br i1 %20, label %23, label %21
21:
  br label %47
23:
  %25 = load i32, i32* %7
  %26 = load i32, i32* %9
  %27 = shl i32 1, %26
  %28 = or i32 %25, %27
  store i32 %28, i32* %10
  %29 = load i32, i32* %10
  %30 = load i32, i32* %5
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %32, label %42
32:
  %33 = load i32*, i32** %4
  %34 = load i32, i32* %10
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i32, i32* %33, i64 %35
  %37 = load i32, i32* %36
  %38 = load i32, i32* %6
  %39 = icmp sle i32 %37, %38
  br i1 %39, label %40, label %42
40:
  %41 = load i32, i32* %10
  store i32 %41, i32* %7
  br label %42
42:
  br label %44
44:
  %45 = load i32, i32* %9
  %46 = add nsw i32 %45, -1
  store i32 %46, i32* %9
  br label %18
47:
  %48 = load i32*, i32** %4
  %49 = load i32, i32* %7
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  %53 = load i32, i32* %6
  %54 = icmp eq i32 %52, %53
  br i1 %54, label %55, label %57
55:
  %56 = load i32, i32* %7
  br label %58
57:
  br label %58
58:
  %59 = phi i32 [ %56, %55 ], [ -1, %57 ]
  ret i32 %59
}
declare i32 @llvm.ctlz.i32(i32, i1 immarg)
