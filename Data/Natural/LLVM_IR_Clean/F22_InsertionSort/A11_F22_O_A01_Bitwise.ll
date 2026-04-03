define dso_local void @InsertionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = load i32, i32* %4
  %12 = icmp slt i32 %10, %11
  br i1 %12, label %15, label %13
13:
  br label %63
15:
  %17 = load i32*, i32** %3
  %18 = load i32, i32* %5
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %17, i64 %19
  %21 = load i32, i32* %20
  store i32 %21, i32* %6
  %23 = load i32, i32* %5
  %24 = sub nsw i32 %23, 1
  store i32 %24, i32* %7
  br label %25
25:
  %26 = load i32, i32* %7
  %27 = icmp slt i32 %26, 0
  br i1 %27, label %36, label %28
28:
  %29 = load i32*, i32** %3
  %30 = load i32, i32* %7
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32
  %34 = load i32, i32* %6
  %35 = icmp sgt i32 %33, %34
  br label %36
36:
  %37 = phi i1 [ false, %25 ], [ %35, %28 ]
  br i1 %37, label %38, label %51
38:
  %39 = load i32*, i32** %3
  %40 = load i32, i32* %7
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i32, i32* %39, i64 %41
  %43 = load i32, i32* %42
  %44 = load i32*, i32** %3
  %45 = load i32, i32* %7
  %46 = add nsw i32 %45, 1
  %47 = sext i32 %46 to i64
  %48 = getelementptr inbounds i32, i32* %44, i64 %47
  store i32 %43, i32* %48
  %49 = load i32, i32* %7
  %50 = sub nsw i32 %49, 1
  store i32 %50, i32* %7
  br label %25
51:
  %52 = load i32, i32* %6
  %53 = load i32*, i32** %3
  %54 = load i32, i32* %7
  %55 = add nsw i32 %54, 1
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i32, i32* %53, i64 %56
  store i32 %52, i32* %57
  br label %60
60:
  %61 = load i32, i32* %5
  %62 = add nsw i32 %61, 1
  store i32 %62, i32* %5
  br label %9
63:
  ret void
}
