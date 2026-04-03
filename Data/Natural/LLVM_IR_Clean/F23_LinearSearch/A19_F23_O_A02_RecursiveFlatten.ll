@LinearSearch.idx = internal global i32 0
define dso_local i32 @LinearSearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %9 = load i32, i32* %6
  %10 = icmp sle i32 %9, 0
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* @LinearSearch.idx
  store i32 -1, i32* %4
  br label %32
12:
  %13 = load i32*, i32** %5
  %14 = getelementptr inbounds i32, i32* %13, i64 0
  %15 = load i32, i32* %14
  %16 = load i32, i32* %7
  %17 = icmp eq i32 %15, %16
  br i1 %17, label %18, label %23
18:
  %20 = load i32, i32* @LinearSearch.idx
  store i32 %20, i32* %8
  store i32 0, i32* @LinearSearch.idx
  %21 = load i32, i32* %8
  store i32 %21, i32* %4
  br label %32
23:
  %24 = load i32, i32* @LinearSearch.idx
  %25 = add nsw i32 %24, 1
  store i32 %25, i32* @LinearSearch.idx
  %26 = load i32*, i32** %5
  %27 = getelementptr inbounds i32, i32* %26, i64 1
  %28 = load i32, i32* %6
  %29 = sub nsw i32 %28, 1
  %30 = load i32, i32* %7
  %31 = call i32 @LinearSearch(i32* %27, i32 %29, i32 %30)
  store i32 %31, i32* %4
  br label %32
32:
  %33 = load i32, i32* %4
  ret i32 %33
}
