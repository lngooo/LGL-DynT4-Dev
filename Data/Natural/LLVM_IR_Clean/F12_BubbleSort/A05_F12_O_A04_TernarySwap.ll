define dso_local void @BubbleSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %8 = load i32, i32* %4
  %9 = icmp sle i32 %8, 1
  br i1 %9, label %10, label %11
10:
  br label %68
11:
  store i32 0, i32* %5
  br label %13
13:
  %14 = load i32, i32* %5
  %15 = load i32, i32* %4
  %16 = sub nsw i32 %15, 1
  %17 = icmp slt i32 %14, %16
  br i1 %17, label %20, label %18
18:
  br label %64
20:
  %21 = load i32*, i32** %3
  %22 = load i32, i32* %5
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i32, i32* %21, i64 %23
  %25 = load i32, i32* %24
  %26 = load i32*, i32** %3
  %27 = load i32, i32* %5
  %28 = add nsw i32 %27, 1
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %26, i64 %29
  %31 = load i32, i32* %30
  %32 = icmp sgt i32 %25, %31
  br i1 %32, label %33, label %58
33:
  %35 = load i32*, i32** %3
  %36 = load i32, i32* %5
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  %39 = load i32, i32* %38
  store i32 %39, i32* %6
  %40 = load i32*, i32** %3
  %41 = load i32, i32* %5
  %42 = add nsw i32 %41, 1
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %40, i64 %43
  %45 = load i32, i32* %44
  %46 = load i32*, i32** %3
  %47 = load i32, i32* %5
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %46, i64 %48
  store i32 %45, i32* %49
  %50 = load i32, i32* %6
  %51 = load i32*, i32** %3
  %52 = load i32, i32* %5
  %53 = add nsw i32 %52, 1
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %51, i64 %54
  store i32 %50, i32* %55
  store i32 0, i32* %7
  %57 = load i32, i32* %7
  br label %59
58:
  br label %59
59:
  %60 = phi i32 [ %57, %33 ], [ 0, %58 ]
  br label %61
61:
  %62 = load i32, i32* %5
  %63 = add nsw i32 %62, 1
  store i32 %63, i32* %5
  br label %13
64:
  %65 = load i32*, i32** %3
  %66 = load i32, i32* %4
  %67 = sub nsw i32 %66, 1
  call void @BubbleSort(i32* %65, i32 %67)
  br label %68
68:
  ret void
}
